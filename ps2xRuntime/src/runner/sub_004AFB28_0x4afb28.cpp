#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AFB28
// Address: 0x4afb28 - 0x4afc28
void sub_004AFB28_0x4afb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFB28_0x4afb28");
#endif

    switch (ctx->pc) {
        case 0x4afb90u: goto label_4afb90;
        case 0x4afbdcu: goto label_4afbdc;
        case 0x4afbf4u: goto label_4afbf4;
        case 0x4afc0cu: goto label_4afc0c;
        default: break;
    }

    ctx->pc = 0x4afb28u;

    // 0x4afb28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4afb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4afb2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4afb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4afb30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4afb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4afb34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4afb34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afb38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4afb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4afb3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4afb3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afb40: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x4AFB40u;
    {
        const bool branch_taken_0x4afb40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFB40u;
        // 0x4afb44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afb40) {
            ctx->pc = 0x4AFC00u;
            goto label_4afc00;
        }
    }
    ctx->pc = 0x4AFB48u;
    // 0x4afb48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4afb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4afb4c: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x4afb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x4afb50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4afb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4afb54: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4afb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x4afb58: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4afb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4afb5c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4afb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x4afb60: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x4afb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4afb64: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x4afb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x4afb68: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x4afb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x4afb6c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x4afb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x4afb70: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x4afb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x4afb74: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x4afb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x4afb78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4afb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4afb7c: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AFB7Cu;
    {
        const bool branch_taken_0x4afb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4afb7c) {
            ctx->pc = 0x4AFB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFB7Cu;
            // 0x4afb80: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFB94u;
            goto label_4afb94;
        }
    }
    ctx->pc = 0x4AFB84u;
    // 0x4afb84: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4afb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4afb88: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x4AFB88u;
    SET_GPR_U32(ctx, 31, 0x4AFB90u);
    ctx->pc = 0x4AFB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFB88u;
    // 0x4afb8c: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4AFB88u, 0x4AFB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFB90u;
label_4afb90:
    // 0x4afb90: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4afb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4afb94:
    // 0x4afb94: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4AFB94u;
    {
        const bool branch_taken_0x4afb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afb94) {
            ctx->pc = 0x4AFB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFB94u;
            // 0x4afb98: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFBC8u;
            goto label_4afbc8;
        }
    }
    ctx->pc = 0x4AFB9Cu;
    // 0x4afb9c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x4afb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4afba0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x4afba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4afba4: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x4afba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4afba8: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x4afba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4afbac: 0xb24301eb  sdl         $v1, 0x1EB($s2)
    ctx->pc = 0x4afbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 491); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4afbb0: 0xb64301e4  sdr         $v1, 0x1E4($s2)
    ctx->pc = 0x4afbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 484); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4afbb4: 0xb24401f3  sdl         $a0, 0x1F3($s2)
    ctx->pc = 0x4afbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4afbb8: 0xb64401ec  sdr         $a0, 0x1EC($s2)
    ctx->pc = 0x4afbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 492); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4afbbc: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x4afbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x4afbc0: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x4afbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x4afbc4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4afbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4afbc8:
    // 0x4afbc8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x4afbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4afbcc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AFBCCu;
    {
        const bool branch_taken_0x4afbcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afbcc) {
            ctx->pc = 0x4AFBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFBCCu;
            // 0x4afbd0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFBE8u;
            goto label_4afbe8;
        }
    }
    ctx->pc = 0x4AFBD4u;
    // 0x4afbd4: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x4AFBD4u;
    SET_GPR_U32(ctx, 31, 0x4AFBDCu);
    ctx->pc = 0x4AFBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFBD4u;
    // 0x4afbd8: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4AFBD4u, 0x4AFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFBDCu;
label_4afbdc:
    // 0x4afbdc: 0x8e431040  lw          $v1, 0x1040($s2)
    ctx->pc = 0x4afbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x4afbe0: 0x24630124  addiu       $v1, $v1, 0x124
    ctx->pc = 0x4afbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
    // 0x4afbe4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x4afbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_4afbe8:
    // 0x4afbe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4afbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afbec: 0xc12d172  jal         func_4B45C8
    ctx->pc = 0x4AFBECu;
    SET_GPR_U32(ctx, 31, 0x4AFBF4u);
    ctx->pc = 0x4AFBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFBECu;
    // 0x4afbf0: 0x264402c0  addiu       $a0, $s2, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B45C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B45C8u, 0x4AFBECu, 0x4AFBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFBF4u;
label_4afbf4:
    // 0x4afbf4: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x4afbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x4afbf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFBF8u;
    {
        const bool branch_taken_0x4afbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFBF8u;
        // 0x4afbfc: 0xae4202c8  sw          $v0, 0x2C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afbf8) {
            ctx->pc = 0x4AFC0Cu;
            goto label_4afc0c;
        }
    }
    ctx->pc = 0x4AFC00u;
label_4afc00:
    // 0x4afc00: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x4afc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x4afc04: 0xc12d172  jal         func_4B45C8
    ctx->pc = 0x4AFC04u;
    SET_GPR_U32(ctx, 31, 0x4AFC0Cu);
    ctx->pc = 0x4AFC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFC04u;
    // 0x4afc08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B45C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B45C8u, 0x4AFC04u, 0x4AFC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFC0Cu;
label_4afc0c:
    // 0x4afc0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4afc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4afc10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4afc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4afc14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4afc14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afc18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFC1Cu;
        // 0x4afc20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFC24u;
    // 0x4afc24: 0x0  nop
    ctx->pc = 0x4afc24u;
    // NOP
    ctx->pc = 0x4afc28u;
}
