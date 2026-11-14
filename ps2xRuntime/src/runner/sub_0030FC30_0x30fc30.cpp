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

// Function: sub_0030FC30
// Address: 0x30fc30 - 0x30fe48
void sub_0030FC30_0x30fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FC30_0x30fc30");
#endif

    switch (ctx->pc) {
        case 0x30fc58u: goto label_30fc58;
        case 0x30fc64u: goto label_30fc64;
        case 0x30fc94u: goto label_30fc94;
        case 0x30fca4u: goto label_30fca4;
        case 0x30fd40u: goto label_30fd40;
        case 0x30fd6cu: goto label_30fd6c;
        case 0x30fd98u: goto label_30fd98;
        case 0x30fdb4u: goto label_30fdb4;
        case 0x30fdc8u: goto label_30fdc8;
        case 0x30fdf8u: goto label_30fdf8;
        case 0x30fe08u: goto label_30fe08;
        default: break;
    }

    ctx->pc = 0x30fc30u;

    // 0x30fc30: 0x6ec60030  ldr         $a2, 0x30($s6)
    ctx->pc = 0x30fc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x30fc34: 0x6ac7003f  ldl         $a3, 0x3F($s6)
    ctx->pc = 0x30fc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x30fc38: 0x6ec70038  ldr         $a3, 0x38($s6)
    ctx->pc = 0x30fc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x30fc3c: 0xb1260037  sdl         $a2, 0x37($t1)
    ctx->pc = 0x30fc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30fc40: 0xb5260030  sdr         $a2, 0x30($t1)
    ctx->pc = 0x30fc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30fc44: 0xb127003f  sdl         $a3, 0x3F($t1)
    ctx->pc = 0x30fc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30fc48: 0xb5270038  sdr         $a3, 0x38($t1)
    ctx->pc = 0x30fc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30fc4c: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x30fc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x30fc50: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x30FC50u;
    SET_GPR_U32(ctx, 31, 0x30FC58u);
    ctx->pc = 0x30FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FC50u;
    // 0x30fc54: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x30FC50u, 0x30FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FC58u;
label_30fc58:
    // 0x30fc58: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x30fc58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fc5c: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x30FC5Cu;
    SET_GPR_U32(ctx, 31, 0x30FC64u);
    ctx->pc = 0x30FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FC5Cu;
    // 0x30fc60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x30FC5Cu, 0x30FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FC64u;
label_30fc64:
    // 0x30fc64: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x30fc64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
    // 0x30fc68: 0x3c0b0031  lui         $t3, 0x31
    ctx->pc = 0x30fc68u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)49 << 16));
    // 0x30fc6c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30fc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x30fc70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc74: 0x25297e00  addiu       $t1, $t1, 0x7E00
    ctx->pc = 0x30fc74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32256));
    // 0x30fc78: 0x256bea68  addiu       $t3, $t3, -0x1598
    ctx->pc = 0x30fc78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961768));
    // 0x30fc7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30fc80: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x30fc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30fc84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30fc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fc88: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x30fc88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x30fc8c: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x30FC8Cu;
    SET_GPR_U32(ctx, 31, 0x30FC94u);
    ctx->pc = 0x30FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FC8Cu;
    // 0x30fc90: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x30FC8Cu, 0x30FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FC94u;
label_30fc94:
    // 0x30fc94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FC94u;
    {
        const bool branch_taken_0x30fc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC94u;
        // 0x30fc98: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc94) {
            ctx->pc = 0x30FCACu;
            goto label_30fcac;
        }
    }
    ctx->pc = 0x30FC9Cu;
    // 0x30fc9c: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x30FC9Cu;
    SET_GPR_U32(ctx, 31, 0x30FCA4u);
    ctx->pc = 0x30FCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FC9Cu;
    // 0x30fca0: 0x8ea42264  lw          $a0, 0x2264($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x30FC9Cu, 0x30FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FCA4u;
label_30fca4:
    // 0x30fca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30FCA4u;
    {
        const bool branch_taken_0x30fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCA4u;
        // 0x30fca8: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fca4) {
            ctx->pc = 0x30FCB8u;
            goto label_30fcb8;
        }
    }
    ctx->pc = 0x30FCACu;
label_30fcac:
    // 0x30fcac: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x30fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x30fcb0: 0xac622260  sw          $v0, 0x2260($v1)
    ctx->pc = 0x30fcb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4F2260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F2260u, _value); } while (0);
    // 0x30fcb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30fcb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fcb8:
    // 0x30fcb8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x30fcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30fcbc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x30fcbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30fcc0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x30fcc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30fcc4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x30fcc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30fcc8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x30fcc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30fccc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x30fcccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30fcd0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30fcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30fcd4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x30fcd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fcd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30fcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x30FCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCDCu;
        // 0x30fce0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FCE4u;
    // 0x30fce4: 0x0  nop
    ctx->pc = 0x30fce4u;
    // NOP
    // 0x30fce8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30fce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30fcec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x30fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x30fcf0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x30fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x30fcf4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x30fcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x30fcf8: 0x24566840  addiu       $s6, $v0, 0x6840
    ctx->pc = 0x30fcf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 26688));
    // 0x30fcfc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x30fcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x30fd00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30fd00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x30fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x30fd08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30fd08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30fd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30fd10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x30fd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x30fd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x30fd18: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x30fd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x30fd1c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x30fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x30fd20: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x30fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x616864u));
    // 0x30fd24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FD24u;
    {
        const bool branch_taken_0x30fd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD24u;
        // 0x30fd28: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd24) {
            ctx->pc = 0x30FD34u;
            goto label_30fd34;
        }
    }
    ctx->pc = 0x30FD2Cu;
    // 0x30fd2c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x30FD2Cu;
    {
        const bool branch_taken_0x30fd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD2Cu;
        // 0x30fd30: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd2c) {
            ctx->pc = 0x30FE1Cu;
            goto label_30fe1c;
        }
    }
    ctx->pc = 0x30FD34u;
label_30fd34:
    // 0x30fd34: 0x3c15004f  lui         $s5, 0x4F
    ctx->pc = 0x30fd34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)79 << 16));
    // 0x30fd38: 0xc0bf6ec  jal         func_2FDBB0
    ctx->pc = 0x30FD38u;
    SET_GPR_U32(ctx, 31, 0x30FD40u);
    ctx->pc = 0x30FD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD38u;
    // 0x30fd3c: 0x8ea42264  lw          $a0, 0x2264($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBB0u, 0x30FD38u, 0x30FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD40u;
label_30fd40:
    // 0x30fd40: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x30FD40u;
    {
        const bool branch_taken_0x30fd40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD40u;
        // 0x30fd44: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd40) {
            ctx->pc = 0x30FE1Cu;
            goto label_30fe1c;
        }
    }
    ctx->pc = 0x30FD48u;
    // 0x30fd48: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FD48u;
    {
        const bool branch_taken_0x30fd48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd48) {
            ctx->pc = 0x30FD64u;
            goto label_30fd64;
        }
    }
    ctx->pc = 0x30FD50u;
    // 0x30fd50: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x30fd50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30fd54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FD54u;
    {
        const bool branch_taken_0x30fd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd54) {
            ctx->pc = 0x30FD64u;
            goto label_30fd64;
        }
    }
    ctx->pc = 0x30FD5Cu;
    // 0x30fd5c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FD5Cu;
    {
        const bool branch_taken_0x30fd5c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD5Cu;
        // 0x30fd60: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd5c) {
            ctx->pc = 0x30FD74u;
            goto label_30fd74;
        }
    }
    ctx->pc = 0x30FD64u;
label_30fd64:
    // 0x30fd64: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x30FD64u;
    SET_GPR_U32(ctx, 31, 0x30FD6Cu);
    ctx->pc = 0x30FD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD64u;
    // 0x30fd68: 0x8ea42264  lw          $a0, 0x2264($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x30FD64u, 0x30FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD6Cu;
label_30fd6c:
    // 0x30fd6c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x30FD6Cu;
    {
        const bool branch_taken_0x30fd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD6Cu;
        // 0x30fd70: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd6c) {
            ctx->pc = 0x30FE1Cu;
            goto label_30fe1c;
        }
    }
    ctx->pc = 0x30FD74u;
label_30fd74:
    // 0x30fd74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30fd78: 0x245168f0  addiu       $s1, $v0, 0x68F0
    ctx->pc = 0x30fd78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26864));
    // 0x30fd7c: 0xac5468f0  sw          $s4, 0x68F0($v0)
    ctx->pc = 0x30fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26864), GPR_U32(ctx, 20));
    // 0x30fd80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30fd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd84: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x30fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x30fd88: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x30fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x30fd8c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x30fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x30fd90: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x30FD90u;
    SET_GPR_U32(ctx, 31, 0x30FD98u);
    ctx->pc = 0x30FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD90u;
    // 0x30fd94: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x30FD90u, 0x30FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD98u;
label_30fd98:
    // 0x30fd98: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x30fd98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x30fd9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30fd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fda0: 0x261068a0  addiu       $s0, $s0, 0x68A0
    ctx->pc = 0x30fda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26784));
    // 0x30fda4: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x30fda4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30fda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdac: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x30FDACu;
    SET_GPR_U32(ctx, 31, 0x30FDB4u);
    ctx->pc = 0x30FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FDACu;
    // 0x30fdb0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x30FDACu, 0x30FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDB4u;
label_30fdb4:
    // 0x30fdb4: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x30fdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x30fdb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30fdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdbc: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x30fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x30fdc0: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x30FDC0u;
    SET_GPR_U32(ctx, 31, 0x30FDC8u);
    ctx->pc = 0x30FDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FDC0u;
    // 0x30fdc4: 0xa200003f  sb          $zero, 0x3F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x30FDC0u, 0x30FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDC8u;
label_30fdc8:
    // 0x30fdc8: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x30fdc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
    // 0x30fdcc: 0x3c0b0031  lui         $t3, 0x31
    ctx->pc = 0x30fdccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)49 << 16));
    // 0x30fdd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x30fdd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdd8: 0x25297e00  addiu       $t1, $t1, 0x7E00
    ctx->pc = 0x30fdd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32256));
    // 0x30fddc: 0x256bea68  addiu       $t3, $t3, -0x1598
    ctx->pc = 0x30fddcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961768));
    // 0x30fde0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30fde4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x30fde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30fde8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30fde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fdec: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x30fdecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x30fdf0: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x30FDF0u;
    SET_GPR_U32(ctx, 31, 0x30FDF8u);
    ctx->pc = 0x30FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FDF0u;
    // 0x30fdf4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x30FDF0u, 0x30FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDF8u;
label_30fdf8:
    // 0x30fdf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FDF8u;
    {
        const bool branch_taken_0x30fdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDF8u;
        // 0x30fdfc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fdf8) {
            ctx->pc = 0x30FE10u;
            goto label_30fe10;
        }
    }
    ctx->pc = 0x30FE00u;
    // 0x30fe00: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x30FE00u;
    SET_GPR_U32(ctx, 31, 0x30FE08u);
    ctx->pc = 0x30FE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FE00u;
    // 0x30fe04: 0x8ea42264  lw          $a0, 0x2264($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x30FE00u, 0x30FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FE08u;
label_30fe08:
    // 0x30fe08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30FE08u;
    {
        const bool branch_taken_0x30fe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE08u;
        // 0x30fe0c: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe08) {
            ctx->pc = 0x30FE1Cu;
            goto label_30fe1c;
        }
    }
    ctx->pc = 0x30FE10u;
label_30fe10:
    // 0x30fe10: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x30fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x30fe14: 0xac622260  sw          $v0, 0x2260($v1)
    ctx->pc = 0x30fe14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4F2260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F2260u, _value); } while (0);
    // 0x30fe18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30fe18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fe1c:
    // 0x30fe1c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x30fe1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30fe20: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x30fe20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30fe24: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x30fe24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30fe28: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x30fe28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30fe2c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x30fe2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30fe30: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30fe30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30fe34: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x30fe34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fe38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30fe38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fe3c: 0x3e00008  jr          $ra
    ctx->pc = 0x30FE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE3Cu;
        // 0x30fe40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FE44u;
    // 0x30fe44: 0x0  nop
    ctx->pc = 0x30fe44u;
    // NOP
    ctx->pc = 0x30fe48u;
}
