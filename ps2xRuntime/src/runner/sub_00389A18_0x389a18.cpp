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

// Function: sub_00389A18
// Address: 0x389a18 - 0x389b50
void sub_00389A18_0x389a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389A18_0x389a18");
#endif

    switch (ctx->pc) {
        case 0x389a2cu: goto label_389a2c;
        case 0x389a70u: goto label_389a70;
        case 0x389a84u: goto label_389a84;
        case 0x389ab0u: goto label_389ab0;
        case 0x389ac4u: goto label_389ac4;
        case 0x389ad8u: goto label_389ad8;
        case 0x389ae8u: goto label_389ae8;
        case 0x389afcu: goto label_389afc;
        case 0x389b08u: goto label_389b08;
        case 0x389b1cu: goto label_389b1c;
        case 0x389b24u: goto label_389b24;
        case 0x389b2cu: goto label_389b2c;
        default: break;
    }

    ctx->pc = 0x389a18u;

label_389a18:
    // 0x389a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389a1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x389a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x389a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389a24: 0xc1083aa  jal         func_420EA8
    ctx->pc = 0x389A24u;
    SET_GPR_U32(ctx, 31, 0x389A2Cu);
    ctx->pc = 0x389A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389A24u;
    // 0x389a28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x389A24u, 0x389A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389A2Cu;
label_389a2c:
    // 0x389a2c: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x389a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x389a30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389a38: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x389a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x389a3c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x389a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x389a40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x389a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389a44: 0x3e00008  jr          $ra
    ctx->pc = 0x389A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A44u;
        // 0x389a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389A4Cu;
    // 0x389a4c: 0x0  nop
    ctx->pc = 0x389a4cu;
    // NOP
    // 0x389a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x389a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x389a54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x389a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x389a58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x389a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x389a5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x389a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x389a60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x389a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x389a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389a68: 0xc0e3330  jal         func_38CCC0
    ctx->pc = 0x389A68u;
    SET_GPR_U32(ctx, 31, 0x389A70u);
    ctx->pc = 0x389A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389A68u;
    // 0x389a6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CCC0u, 0x389A68u, 0x389A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389A70u;
label_389a70:
    // 0x389a70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x389a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389a74: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x389A74u;
    {
        const bool branch_taken_0x389a74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x389A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A74u;
        // 0x389a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a74) {
            ctx->pc = 0x389B30u;
            goto label_389b30;
        }
    }
    ctx->pc = 0x389A7Cu;
    // 0x389a7c: 0xc1067b0  jal         func_419EC0
    ctx->pc = 0x389A7Cu;
    SET_GPR_U32(ctx, 31, 0x389A84u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x389A7Cu, 0x389A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389A84u;
label_389a84:
    // 0x389a84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x389a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389a88: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x389A88u;
    {
        const bool branch_taken_0x389a88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x389a88) {
            ctx->pc = 0x389B24u;
            goto label_389b24;
        }
    }
    ctx->pc = 0x389A90u;
    // 0x389a90: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x389a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x389a94: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x389a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x389a98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x389a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x389a9c: 0xb2420047  sdl         $v0, 0x47($s2)
    ctx->pc = 0x389a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x389aa0: 0xb6420040  sdr         $v0, 0x40($s2)
    ctx->pc = 0x389aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x389aa4: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x389aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x389aa8: 0xc0e2094  jal         func_388250
    ctx->pc = 0x389AA8u;
    SET_GPR_U32(ctx, 31, 0x389AB0u);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x389AA8u, 0x389AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389AB0u;
label_389ab0:
    // 0x389ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x389ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389ab4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x389AB4u;
    {
        const bool branch_taken_0x389ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x389ab4) {
            ctx->pc = 0x389B1Cu;
            goto label_389b1c;
        }
    }
    ctx->pc = 0x389ABCu;
    // 0x389abc: 0xc0e2744  jal         func_389D10
    ctx->pc = 0x389ABCu;
    SET_GPR_U32(ctx, 31, 0x389AC4u);
    ctx->pc = 0x389D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D10u, 0x389ABCu, 0x389AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389AC4u;
label_389ac4:
    // 0x389ac4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x389ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389ac8: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x389AC8u;
    {
        const bool branch_taken_0x389ac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x389ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389AC8u;
        // 0x389acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ac8) {
            ctx->pc = 0x389B14u;
            goto label_389b14;
        }
    }
    ctx->pc = 0x389AD0u;
    // 0x389ad0: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x389AD0u;
    SET_GPR_U32(ctx, 31, 0x389AD8u);
    ctx->pc = 0x389AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389AD0u;
    // 0x389ad4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    goto label_389a18;
    ctx->pc = 0x389AD8u;
label_389ad8:
    // 0x389ad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x389ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389adc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x389adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389ae0: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x389AE0u;
    SET_GPR_U32(ctx, 31, 0x389AE8u);
    ctx->pc = 0x389AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389AE0u;
    // 0x389ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x389AE0u, 0x389AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389AE8u;
label_389ae8:
    // 0x389ae8: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x389ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x389aec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x389aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389af0: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x389af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x389af4: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x389AF4u;
    SET_GPR_U32(ctx, 31, 0x389AFCu);
    ctx->pc = 0x389AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389AF4u;
    // 0x389af8: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x389AF4u, 0x389AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389AFCu;
label_389afc:
    // 0x389afc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x389afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389b00: 0xc0e2700  jal         func_389C00
    ctx->pc = 0x389B00u;
    SET_GPR_U32(ctx, 31, 0x389B08u);
    ctx->pc = 0x389B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389B00u;
    // 0x389b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C00u, 0x389B00u, 0x389B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389B08u;
label_389b08:
    // 0x389b08: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x389b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x389b0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x389B0Cu;
    {
        const bool branch_taken_0x389b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B0Cu;
        // 0x389b10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b0c) {
            ctx->pc = 0x389B30u;
            goto label_389b30;
        }
    }
    ctx->pc = 0x389B14u;
label_389b14:
    // 0x389b14: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x389B14u;
    SET_GPR_U32(ctx, 31, 0x389B1Cu);
    ctx->pc = 0x389B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389B14u;
    // 0x389b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x389B14u, 0x389B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389B1Cu;
label_389b1c:
    // 0x389b1c: 0xc1067c6  jal         func_419F18
    ctx->pc = 0x389B1Cu;
    SET_GPR_U32(ctx, 31, 0x389B24u);
    ctx->pc = 0x389B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389B1Cu;
    // 0x389b20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x389B1Cu, 0x389B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389B24u;
label_389b24:
    // 0x389b24: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x389B24u;
    SET_GPR_U32(ctx, 31, 0x389B2Cu);
    ctx->pc = 0x389B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389B24u;
    // 0x389b28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x389B24u, 0x389B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389B2Cu;
label_389b2c:
    // 0x389b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x389b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389b30:
    // 0x389b30: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x389b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x389b34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x389b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x389b38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x389b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389b3c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x389b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389b44: 0x3e00008  jr          $ra
    ctx->pc = 0x389B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B44u;
        // 0x389b48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389B4Cu;
    // 0x389b4c: 0x0  nop
    ctx->pc = 0x389b4cu;
    // NOP
    ctx->pc = 0x389b50u;
}
