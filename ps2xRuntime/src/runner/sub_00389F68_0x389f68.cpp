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

// Function: sub_00389F68
// Address: 0x389f68 - 0x38a0d8
void sub_00389F68_0x389f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389F68_0x389f68");
#endif

    switch (ctx->pc) {
        case 0x389f84u: goto label_389f84;
        case 0x389fccu: goto label_389fcc;
        case 0x389fecu: goto label_389fec;
        case 0x38a000u: goto label_38a000;
        case 0x38a040u: goto label_38a040;
        case 0x38a050u: goto label_38a050;
        case 0x38a0bcu: goto label_38a0bc;
        default: break;
    }

    ctx->pc = 0x389f68u;

    // 0x389f68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x389f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x389f6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x389f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x389f70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x389f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x389f74: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x389f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x389f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389f7c: 0xc0e2094  jal         func_388250
    ctx->pc = 0x389F7Cu;
    SET_GPR_U32(ctx, 31, 0x389F84u);
    ctx->pc = 0x389F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F7Cu;
    // 0x389f80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x389F7Cu, 0x389F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F84u;
label_389f84:
    // 0x389f84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x389f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389f88: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x389F88u;
    {
        const bool branch_taken_0x389f88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x389f88) {
            ctx->pc = 0x389F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389F88u;
            // 0x389f8c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389F98u;
            goto label_389f98;
        }
    }
    ctx->pc = 0x389F90u;
    // 0x389f90: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x389F90u;
    {
        const bool branch_taken_0x389f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F90u;
        // 0x389f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f90) {
            ctx->pc = 0x38A0C0u;
            goto label_38a0c0;
        }
    }
    ctx->pc = 0x389F98u;
label_389f98:
    // 0x389f98: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x389f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x389f9c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x389f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x389fa0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x389fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x389fa4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x389fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x389fa8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x389fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x389fac: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x389facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x389fb0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x389fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x389fb4: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x389fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x389fb8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x389fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x389fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x389fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389fc0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x389fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x389fc4: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x389FC4u;
    SET_GPR_U32(ctx, 31, 0x389FCCu);
    ctx->pc = 0x389FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389FC4u;
    // 0x389fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x389FC4u, 0x389FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389FCCu;
label_389fcc:
    // 0x389fcc: 0x8e320018  lw          $s2, 0x18($s1)
    ctx->pc = 0x389fccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x389fd0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x389fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x389fd4: 0x1242001e  beq         $s2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x389FD4u;
    {
        const bool branch_taken_0x389fd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x389fd4) {
            ctx->pc = 0x38A050u;
            goto label_38a050;
        }
    }
    ctx->pc = 0x389FDCu;
    // 0x389fdc: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x389FDCu;
    {
        const bool branch_taken_0x389fdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x389fdc) {
            ctx->pc = 0x389FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389FDCu;
            // 0x389fe0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389FF0u;
            goto label_389ff0;
        }
    }
    ctx->pc = 0x389FE4u;
    // 0x389fe4: 0xc0e3444  jal         func_38D110
    ctx->pc = 0x389FE4u;
    SET_GPR_U32(ctx, 31, 0x389FECu);
    ctx->pc = 0x389FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389FE4u;
    // 0x389fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x389FE4u, 0x389FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389FECu;
label_389fec:
    // 0x389fec: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x389fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_389ff0:
    // 0x389ff0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389FF0u;
    {
        const bool branch_taken_0x389ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x389ff0) {
            ctx->pc = 0x38A000u;
            goto label_38a000;
        }
    }
    ctx->pc = 0x389FF8u;
    // 0x389ff8: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x389FF8u;
    SET_GPR_U32(ctx, 31, 0x38A000u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x389FF8u, 0x38A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A000u;
label_38a000:
    // 0x38a000: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x38A000u;
    {
        const bool branch_taken_0x38a000 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A000u;
        // 0x38a004: 0xae120018  sw          $s2, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a000) {
            ctx->pc = 0x38A02Cu;
            goto label_38a02c;
        }
    }
    ctx->pc = 0x38A008u;
    // 0x38a008: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x38a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x38a00c: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x38a00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x38a010: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x38a010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x38a014: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x38a014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x38a018: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x38a018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x38a01c: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x38a01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a020: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x38a020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a024: 0xb204002b  sdl         $a0, 0x2B($s0)
    ctx->pc = 0x38a024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a028: 0xb6040024  sdr         $a0, 0x24($s0)
    ctx->pc = 0x38a028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38a02c:
    // 0x38a02c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x38a02cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38a030: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A030u;
    {
        const bool branch_taken_0x38a030 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a030) {
            ctx->pc = 0x38A050u;
            goto label_38a050;
        }
    }
    ctx->pc = 0x38A038u;
    // 0x38a038: 0xc0e6ea2  jal         func_39BA88
    ctx->pc = 0x38A038u;
    SET_GPR_U32(ctx, 31, 0x38A040u);
    ctx->pc = 0x38A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A038u;
    // 0x38a03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA88u, 0x38A038u, 0x38A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A040u;
label_38a040:
    // 0x38a040: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A040u;
    {
        const bool branch_taken_0x38a040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a040) {
            ctx->pc = 0x38A050u;
            goto label_38a050;
        }
    }
    ctx->pc = 0x38A048u;
    // 0x38a048: 0xc106794  jal         func_419E50
    ctx->pc = 0x38A048u;
    SET_GPR_U32(ctx, 31, 0x38A050u);
    ctx->pc = 0x38A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A048u;
    // 0x38a04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x38A048u, 0x38A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A050u;
label_38a050:
    // 0x38a050: 0x6a270023  ldl         $a3, 0x23($s1)
    ctx->pc = 0x38a050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x38a054: 0x6e27001c  ldr         $a3, 0x1C($s1)
    ctx->pc = 0x38a054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x38a058: 0x6a28002b  ldl         $t0, 0x2B($s1)
    ctx->pc = 0x38a058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x38a05c: 0x6e280024  ldr         $t0, 0x24($s1)
    ctx->pc = 0x38a05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x38a060: 0xb2070023  sdl         $a3, 0x23($s0)
    ctx->pc = 0x38a060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a064: 0xb607001c  sdr         $a3, 0x1C($s0)
    ctx->pc = 0x38a064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a068: 0xb208002b  sdl         $t0, 0x2B($s0)
    ctx->pc = 0x38a068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a06c: 0xb6080024  sdr         $t0, 0x24($s0)
    ctx->pc = 0x38a06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a070: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38a070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38a074: 0x2484ada0  addiu       $a0, $a0, -0x5260
    ctx->pc = 0x38a074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
    // 0x38a078: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38a078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a07c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x38a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x38a080: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x38a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x38a084: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x38a084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x38a088: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x38a088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x38a08c: 0x6a270053  ldl         $a3, 0x53($s1)
    ctx->pc = 0x38a08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x38a090: 0x6e27004c  ldr         $a3, 0x4C($s1)
    ctx->pc = 0x38a090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x38a094: 0x6a28005b  ldl         $t0, 0x5B($s1)
    ctx->pc = 0x38a094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x38a098: 0x6e280054  ldr         $t0, 0x54($s1)
    ctx->pc = 0x38a098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x38a09c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x38a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x38a0a0: 0xb2070053  sdl         $a3, 0x53($s0)
    ctx->pc = 0x38a0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a0a4: 0xb607004c  sdr         $a3, 0x4C($s0)
    ctx->pc = 0x38a0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a0a8: 0xb208005b  sdl         $t0, 0x5B($s0)
    ctx->pc = 0x38a0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a0ac: 0xb6080054  sdr         $t0, 0x54($s0)
    ctx->pc = 0x38a0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a0b0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x38a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x38a0b4: 0xc104cbe  jal         func_4132F8
    ctx->pc = 0x38A0B4u;
    SET_GPR_U32(ctx, 31, 0x38A0BCu);
    ctx->pc = 0x38A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A0B4u;
    // 0x38a0b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4132F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4132F8u, 0x38A0B4u, 0x38A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A0BCu;
label_38a0bc:
    // 0x38a0bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a0c0:
    // 0x38a0c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38a0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a0c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38a0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a0c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38a0c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x38A0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A0D0u;
        // 0x38a0d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A0D8u;
}
