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

// Function: sub_003D3C20
// Address: 0x3d3c20 - 0x3d4120
void sub_003D3C20_0x3d3c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3C20_0x3d3c20");
#endif

    switch (ctx->pc) {
        case 0x3d3c54u: goto label_3d3c54;
        case 0x3d3cc4u: goto label_3d3cc4;
        case 0x3d3d14u: goto label_3d3d14;
        case 0x3d3d64u: goto label_3d3d64;
        case 0x3d3d98u: goto label_3d3d98;
        case 0x3d3da4u: goto label_3d3da4;
        case 0x3d3df0u: goto label_3d3df0;
        case 0x3d3e3cu: goto label_3d3e3c;
        case 0x3d3e88u: goto label_3d3e88;
        case 0x3d3f48u: goto label_3d3f48;
        case 0x3d3fc4u: goto label_3d3fc4;
        case 0x3d3fccu: goto label_3d3fcc;
        case 0x3d4040u: goto label_3d4040;
        case 0x3d40d4u: goto label_3d40d4;
        case 0x3d40ecu: goto label_3d40ec;
        default: break;
    }

    ctx->pc = 0x3d3c20u;

    // 0x3d3c20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3d3c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3d3c24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d3c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3c28: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3d3c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3d3c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d3c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3c30: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3d3c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3d3c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d3c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3c38: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3d3c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3d3c3c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3d3c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3d3c40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d3c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3c44: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3d3c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3d3c48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d3c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d3c4c: 0xc0f4df6  jal         func_3D37D8
    ctx->pc = 0x3D3C4Cu;
    SET_GPR_U32(ctx, 31, 0x3D3C54u);
    ctx->pc = 0x3D3C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3C4Cu;
    // 0x3d3c50: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D37D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D37D8u, 0x3D3C4Cu, 0x3D3C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3C54u;
label_3d3c54:
    // 0x3d3c54: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3d3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3d3c58: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3d3c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3d3c5c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3d3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x3d3c60: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3d3c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3d3c64: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x3D3C64u;
    {
        const bool branch_taken_0x3d3c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C64u;
        // 0x3d3c68: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c64) {
            ctx->pc = 0x3D3ED4u;
            goto label_3d3ed4;
        }
    }
    ctx->pc = 0x3D3C6Cu;
    // 0x3d3c6c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3d3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3d3c70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3C70u;
    {
        const bool branch_taken_0x3d3c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C70u;
        // 0x3d3c74: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c70) {
            ctx->pc = 0x3D3C84u;
            goto label_3d3c84;
        }
    }
    ctx->pc = 0x3D3C78u;
    // 0x3d3c78: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x3d3c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d3c7c: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x3d3c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3d3c80: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x3d3c80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d3c84:
    // 0x3d3c84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d3c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3c88: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3d3c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3d3c8c: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x3D3C8Cu;
    {
        const bool branch_taken_0x3d3c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C8Cu;
        // 0x3d3c90: 0x245a023  subu        $s4, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c8c) {
            ctx->pc = 0x3D3ED4u;
            goto label_3d3ed4;
        }
    }
    ctx->pc = 0x3D3C94u;
    // 0x3d3c94: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d3c98: 0x32830003  andi        $v1, $s4, 0x3
    ctx->pc = 0x3d3c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
    // 0x3d3c9c: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x3D3C9Cu;
    {
        const bool branch_taken_0x3d3c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C9Cu;
        // 0x3d3ca0: 0x2453b1e0  addiu       $s3, $v0, -0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c9c) {
            ctx->pc = 0x3D3D98u;
            goto label_3d3d98;
        }
    }
    ctx->pc = 0x3D3CA4u;
    // 0x3d3ca4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3d3ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d3ca8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3D3CA8u;
    {
        const bool branch_taken_0x3d3ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CA8u;
        // 0x3d3cac: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ca8) {
            ctx->pc = 0x3D3D5Cu;
            goto label_3d3d5c;
        }
    }
    ctx->pc = 0x3D3CB0u;
    // 0x3d3cb0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d3cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d3cb4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D3CB4u;
    {
        const bool branch_taken_0x3d3cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3cb4) {
            ctx->pc = 0x3D3D0Cu;
            goto label_3d3d0c;
        }
    }
    ctx->pc = 0x3D3CBCu;
    // 0x3d3cbc: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D3CBCu;
    SET_GPR_U32(ctx, 31, 0x3D3CC4u);
    ctx->pc = 0x3D3CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3CBCu;
    // 0x3d3cc0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3CBCu, 0x3D3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3CC4u;
label_3d3cc4:
    // 0x3d3cc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d3cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3cc8: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x3d3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d3ccc: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x3d3cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3d3cd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3cd4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d3cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3d3cd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3CD8u;
    {
        const bool branch_taken_0x3d3cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CD8u;
        // 0x3d3cdc: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3cd8) {
            ctx->pc = 0x3D3CE8u;
            goto label_3d3ce8;
        }
    }
    ctx->pc = 0x3D3CE0u;
    // 0x3d3ce0: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x3d3ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x3d3ce4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3d3ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3d3ce8:
    // 0x3d3ce8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3d3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d3cec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d3cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d3cf0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3d3cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d3cf4: 0x94a20084  lhu         $v0, 0x84($a1)
    ctx->pc = 0x3d3cf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x3d3cf8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3d3cfc: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3d3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x3d3d00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d3d04: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x3d3d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x3d3d08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d3d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3d0c:
    // 0x3d3d0c: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D3D0Cu;
    SET_GPR_U32(ctx, 31, 0x3D3D14u);
    ctx->pc = 0x3D3D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3D0Cu;
    // 0x3d3d10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3D0Cu, 0x3D3D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3D14u;
label_3d3d14:
    // 0x3d3d14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d3d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3d18: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x3d3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d3d1c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x3d3d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3d3d20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3d24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d3d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3d3d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3D28u;
    {
        const bool branch_taken_0x3d3d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D28u;
        // 0x3d3d2c: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d28) {
            ctx->pc = 0x3D3D38u;
            goto label_3d3d38;
        }
    }
    ctx->pc = 0x3D3D30u;
    // 0x3d3d30: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x3d3d30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x3d3d34: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3d3d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3d3d38:
    // 0x3d3d38: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3d3d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d3d3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d3d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d3d40: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3d3d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d3d44: 0x94a20084  lhu         $v0, 0x84($a1)
    ctx->pc = 0x3d3d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x3d3d48: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d3d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3d3d4c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3d3d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x3d3d50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d3d54: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x3d3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x3d3d58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d3d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3d5c:
    // 0x3d3d5c: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D3D5Cu;
    SET_GPR_U32(ctx, 31, 0x3D3D64u);
    ctx->pc = 0x3D3D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3D5Cu;
    // 0x3d3d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3D5Cu, 0x3D3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3D64u;
label_3d3d64:
    // 0x3d3d64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d3d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3d68: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x3d3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d3d6c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x3d3d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3d3d70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3d74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d3d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3d3d78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3D78u;
    {
        const bool branch_taken_0x3d3d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D78u;
        // 0x3d3d7c: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d78) {
            ctx->pc = 0x3D3D88u;
            goto label_3d3d88;
        }
    }
    ctx->pc = 0x3D3D80u;
    // 0x3d3d80: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x3d3d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x3d3d84: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3d3d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3d3d88:
    // 0x3d3d88: 0x94a40084  lhu         $a0, 0x84($a1)
    ctx->pc = 0x3d3d88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x3d3d8c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3D3D8Cu;
    {
        const bool branch_taken_0x3d3d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D8Cu;
        // 0x3d3d90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d8c) {
            ctx->pc = 0x3D3EB4u;
            goto label_3d3eb4;
        }
    }
    ctx->pc = 0x3D3D94u;
    // 0x3d3d94: 0x0  nop
    ctx->pc = 0x3d3d94u;
    // NOP
label_3d3d98:
    // 0x3d3d98: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d3d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d3d9c: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D3D9Cu;
    SET_GPR_U32(ctx, 31, 0x3D3DA4u);
    ctx->pc = 0x3D3DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3D9Cu;
    // 0x3d3da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3D9Cu, 0x3D3DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DA4u;
label_3d3da4:
    // 0x3d3da4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d3da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3da8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3d3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d3dac: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3d3dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d3db0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3db4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3d3db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3d3db8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3DB8u;
    {
        const bool branch_taken_0x3d3db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3DB8u;
        // 0x3d3dbc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3db8) {
            ctx->pc = 0x3D3DC8u;
            goto label_3d3dc8;
        }
    }
    ctx->pc = 0x3D3DC0u;
    // 0x3d3dc0: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x3d3dc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x3d3dc4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d3dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3d3dc8:
    // 0x3d3dc8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3d3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d3dcc: 0x94a60084  lhu         $a2, 0x84($a1)
    ctx->pc = 0x3d3dccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x3d3dd0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3d3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d3dd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d3dd8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d3dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d3ddc: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x3d3ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d3de0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3d3de4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3d3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3d3de8: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D3DE8u;
    SET_GPR_U32(ctx, 31, 0x3D3DF0u);
    ctx->pc = 0x3D3DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DE8u;
    // 0x3d3dec: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3DE8u, 0x3D3DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DF0u;
label_3d3df0:
    // 0x3d3df0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d3df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3df4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3d3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d3df8: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3d3df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d3dfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3e00: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3d3e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3d3e04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3E04u;
    {
        const bool branch_taken_0x3d3e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E04u;
        // 0x3d3e08: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3e04) {
            ctx->pc = 0x3D3E14u;
            goto label_3d3e14;
        }
    }
    ctx->pc = 0x3D3E0Cu;
    // 0x3d3e0c: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x3d3e0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x3d3e10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d3e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3d3e14:
    // 0x3d3e14: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3d3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d3e18: 0x94a60084  lhu         $a2, 0x84($a1)
    ctx->pc = 0x3d3e18u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x3d3e1c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3d3e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d3e20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d3e24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d3e28: 0x26250002  addiu       $a1, $s1, 0x2
    ctx->pc = 0x3d3e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3d3e2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3d3e30: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3d3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3d3e34: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D3E34u;
    SET_GPR_U32(ctx, 31, 0x3D3E3Cu);
    ctx->pc = 0x3D3E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E34u;
    // 0x3d3e38: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3E34u, 0x3D3E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E3Cu;
label_3d3e3c:
    // 0x3d3e3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d3e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3e40: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3d3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d3e44: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3d3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d3e48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3e4c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3d3e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3d3e50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3E50u;
    {
        const bool branch_taken_0x3d3e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E50u;
        // 0x3d3e54: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3e50) {
            ctx->pc = 0x3D3E60u;
            goto label_3d3e60;
        }
    }
    ctx->pc = 0x3D3E58u;
    // 0x3d3e58: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x3d3e58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x3d3e5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d3e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3d3e60:
    // 0x3d3e60: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3d3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d3e64: 0x94a60084  lhu         $a2, 0x84($a1)
    ctx->pc = 0x3d3e64u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x3d3e68: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3d3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d3e6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d3e70: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d3e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d3e74: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x3d3e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x3d3e78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3d3e7c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3d3e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3d3e80: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D3E80u;
    SET_GPR_U32(ctx, 31, 0x3D3E88u);
    ctx->pc = 0x3D3E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E80u;
    // 0x3d3e84: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3E80u, 0x3D3E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E88u;
label_3d3e88:
    // 0x3d3e88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d3e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3e8c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3d3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d3e90: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3d3e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d3e94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3e98: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3d3e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3d3e9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3E9Cu;
    {
        const bool branch_taken_0x3d3e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E9Cu;
        // 0x3d3ea0: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3e9c) {
            ctx->pc = 0x3D3EACu;
            goto label_3d3eac;
        }
    }
    ctx->pc = 0x3D3EA4u;
    // 0x3d3ea4: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x3d3ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x3d3ea8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3d3ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3d3eac:
    // 0x3d3eac: 0x94a40084  lhu         $a0, 0x84($a1)
    ctx->pc = 0x3d3eacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x3d3eb0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3d3eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3d3eb4:
    // 0x3d3eb4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3d3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d3eb8: 0x232282a  slt         $a1, $s1, $s2
    ctx->pc = 0x3d3eb8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3d3ebc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3d3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d3ec0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3d3ec4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d3ec8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3d3ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x3d3ecc: 0x14a0ffb2  bnez        $a1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x3D3ECCu;
    {
        const bool branch_taken_0x3d3ecc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3ECCu;
        // 0x3d3ed0: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ecc) {
            ctx->pc = 0x3D3D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3d98;
        }
    }
    ctx->pc = 0x3D3ED4u;
label_3d3ed4:
    // 0x3d3ed4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x3d3ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3d3ed8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3ED8u;
    {
        const bool branch_taken_0x3d3ed8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3ED8u;
        // 0x3d3edc: 0x286102a  slt         $v0, $s4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ed8) {
            ctx->pc = 0x3D3EE8u;
            goto label_3d3ee8;
        }
    }
    ctx->pc = 0x3D3EE0u;
    // 0x3d3ee0: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x3D3EE0u;
    {
        const bool branch_taken_0x3d3ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EE0u;
        // 0x3d3ee4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ee0) {
            ctx->pc = 0x3D40B8u;
            goto label_3d40b8;
        }
    }
    ctx->pc = 0x3D3EE8u;
label_3d3ee8:
    // 0x3d3ee8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3d3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3d3eec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3ef0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3d3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3d3ef4: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x3d3ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d3ef8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x3d3ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3d3efc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3EFCu;
    {
        const bool branch_taken_0x3d3efc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EFCu;
        // 0x3d3f00: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3efc) {
            ctx->pc = 0x3D3F0Cu;
            goto label_3d3f0c;
        }
    }
    ctx->pc = 0x3D3F04u;
    // 0x3d3f04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3F04u;
    {
        const bool branch_taken_0x3d3f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F04u;
        // 0x3d3f08: 0x8fb20008  lw          $s2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f04) {
            ctx->pc = 0x3D3F20u;
            goto label_3d3f20;
        }
    }
    ctx->pc = 0x3D3F0Cu;
label_3d3f0c:
    // 0x3d3f0c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3d3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d3f10: 0xd41023  subu        $v0, $a2, $s4
    ctx->pc = 0x3d3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x3d3f14: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x3d3f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d3f18: 0x92182a  slt         $v1, $a0, $s2
    ctx->pc = 0x3d3f18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3d3f1c: 0x83900b  movn        $s2, $a0, $v1
    ctx->pc = 0x3d3f1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_3d3f20:
    // 0x3d3f20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d3f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3f24: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3d3f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3d3f28: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3D3F28u;
    {
        const bool branch_taken_0x3d3f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F28u;
        // 0x3d3f2c: 0x245a023  subu        $s4, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f28) {
            ctx->pc = 0x3D40B4u;
            goto label_3d40b4;
        }
    }
    ctx->pc = 0x3D3F30u;
    // 0x3d3f30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d3f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d3f34: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x3d3f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x3d3f38: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D3F38u;
    {
        const bool branch_taken_0x3d3f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F38u;
        // 0x3d3f3c: 0x2453b1e0  addiu       $s3, $v0, -0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f38) {
            ctx->pc = 0x3D3FC0u;
            goto label_3d3fc0;
        }
    }
    ctx->pc = 0x3D3F40u;
    // 0x3d3f40: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D3F40u;
    SET_GPR_U32(ctx, 31, 0x3D3F48u);
    ctx->pc = 0x3D3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3F40u;
    // 0x3d3f44: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3F40u, 0x3D3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3F48u;
label_3d3f48:
    // 0x3d3f48: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3d3f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3f4c: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x3d3f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d3f50: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d3f54: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D3F54u;
    {
        const bool branch_taken_0x3d3f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3f54) {
            ctx->pc = 0x3D3F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3F54u;
            // 0x3d3f58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3FB0u;
            goto label_3d3fb0;
        }
    }
    ctx->pc = 0x3D3F5Cu;
    // 0x3d3f5c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3d3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3d3f60: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x3d3f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d3f64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3f68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d3f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3d3f6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3F6Cu;
    {
        const bool branch_taken_0x3d3f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F6Cu;
        // 0x3d3f70: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f6c) {
            ctx->pc = 0x3D3F80u;
            goto label_3d3f80;
        }
    }
    ctx->pc = 0x3D3F74u;
    // 0x3d3f74: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x3d3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d3f78: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d3f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d3f7c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3d3f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3d3f80:
    // 0x3d3f80: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3d3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d3f84: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3d3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3d3f88: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3d3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3d3f8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3f90: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3d3f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3d3f94: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3F94u;
    {
        const bool branch_taken_0x3d3f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F94u;
        // 0x3d3f98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f94) {
            ctx->pc = 0x3D3FB0u;
            goto label_3d3fb0;
        }
    }
    ctx->pc = 0x3D3F9Cu;
    // 0x3d3f9c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x3d3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d3fa0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3d3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d3fa4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3d3fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3d3fa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d3fac: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3d3facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_3d3fb0:
    // 0x3d3fb0: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3d3fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3d3fb4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3D3FB4u;
    {
        const bool branch_taken_0x3d3fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3FB4u;
        // 0x3d3fb8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3fb4) {
            ctx->pc = 0x3D40B8u;
            goto label_3d40b8;
        }
    }
    ctx->pc = 0x3D3FBCu;
    // 0x3d3fbc: 0x0  nop
    ctx->pc = 0x3d3fbcu;
    // NOP
label_3d3fc0:
    // 0x3d3fc0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d3fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d3fc4:
    // 0x3d3fc4: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D3FC4u;
    SET_GPR_U32(ctx, 31, 0x3D3FCCu);
    ctx->pc = 0x3D3FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3FC4u;
    // 0x3d3fc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3FC4u, 0x3D3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3FCCu;
label_3d3fcc:
    // 0x3d3fcc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3d3fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3fd0: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x3d3fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d3fd4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d3fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d3fd8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D3FD8u;
    {
        const bool branch_taken_0x3d3fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3FD8u;
        // 0x3d3fdc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3fd8) {
            ctx->pc = 0x3D4038u;
            goto label_3d4038;
        }
    }
    ctx->pc = 0x3D3FE0u;
    // 0x3d3fe0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3d3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3d3fe4: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x3d3fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3d3fe8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3fec: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3d3fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3d3ff0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3FF0u;
    {
        const bool branch_taken_0x3d3ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3FF0u;
        // 0x3d3ff4: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ff0) {
            ctx->pc = 0x3D4004u;
            goto label_3d4004;
        }
    }
    ctx->pc = 0x3D3FF8u;
    // 0x3d3ff8: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x3d3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d3ffc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d3ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d4000: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3d4000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3d4004:
    // 0x3d4004: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3d4004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d4008: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3d4008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3d400c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3d400cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3d4010: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d4010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d4014: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3d4014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3d4018: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D4018u;
    {
        const bool branch_taken_0x3d4018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4018u;
        // 0x3d401c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4018) {
            ctx->pc = 0x3D4038u;
            goto label_3d4038;
        }
    }
    ctx->pc = 0x3D4020u;
    // 0x3d4020: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x3d4020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d4024: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3d4024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d4028: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3d4028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3d402c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d4030: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3d4030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x3d4034: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d4034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d4038:
    // 0x3d4038: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D4038u;
    SET_GPR_U32(ctx, 31, 0x3D4040u);
    ctx->pc = 0x3D403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4038u;
    // 0x3d403c: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D4038u, 0x3D4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4040u;
label_3d4040:
    // 0x3d4040: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3d4040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d4044: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x3d4044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d4048: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d4048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d404c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D404Cu;
    {
        const bool branch_taken_0x3d404c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d404c) {
            ctx->pc = 0x3D4050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D404Cu;
            // 0x3d4050: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D40A8u;
            goto label_3d40a8;
        }
    }
    ctx->pc = 0x3D4054u;
    // 0x3d4054: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3d4054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3d4058: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x3d4058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3d405c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d405cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d4060: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3d4060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3d4064: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4064u;
    {
        const bool branch_taken_0x3d4064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4064u;
        // 0x3d4068: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4064) {
            ctx->pc = 0x3D4078u;
            goto label_3d4078;
        }
    }
    ctx->pc = 0x3D406Cu;
    // 0x3d406c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x3d406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d4070: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d4070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d4074: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3d4074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3d4078:
    // 0x3d4078: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3d4078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d407c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3d407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3d4080: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3d4080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3d4084: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d4084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d4088: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3d4088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3d408c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D408Cu;
    {
        const bool branch_taken_0x3d408c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D408Cu;
        // 0x3d4090: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d408c) {
            ctx->pc = 0x3D40A8u;
            goto label_3d40a8;
        }
    }
    ctx->pc = 0x3D4094u;
    // 0x3d4094: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x3d4094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d4098: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3d4098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d409c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3d409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3d40a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d40a4: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3d40a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_3d40a8:
    // 0x3d40a8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3d40a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3d40ac: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3D40ACu;
    {
        const bool branch_taken_0x3d40ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40ACu;
        // 0x3d40b0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d40ac) {
            ctx->pc = 0x3D3FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3fc4;
        }
    }
    ctx->pc = 0x3D40B4u;
label_3d40b4:
    // 0x3d40b4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d40b8:
    // 0x3d40b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3d40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d40bc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d40bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d40c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d40c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D40C4u;
    {
        const bool branch_taken_0x3d40c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40C4u;
        // 0x3d40c8: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d40c4) {
            ctx->pc = 0x3D40D8u;
            goto label_3d40d8;
        }
    }
    ctx->pc = 0x3D40CCu;
    // 0x3d40cc: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3D40CCu;
    SET_GPR_U32(ctx, 31, 0x3D40D4u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D40CCu, 0x3D40D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D40D4u;
label_3d40d4:
    // 0x3d40d4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3d40d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3d40d8:
    // 0x3d40d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d40d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d40dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D40DCu;
    {
        const bool branch_taken_0x3d40dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40DCu;
        // 0x3d40e0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d40dc) {
            ctx->pc = 0x3D40F0u;
            goto label_3d40f0;
        }
    }
    ctx->pc = 0x3D40E4u;
    // 0x3d40e4: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3D40E4u;
    SET_GPR_U32(ctx, 31, 0x3D40ECu);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D40E4u, 0x3D40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D40ECu;
label_3d40ec:
    // 0x3d40ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3d40ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3d40f0:
    // 0x3d40f0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3d40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d40f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3d40f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d40f8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3d40f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d40fc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3d40fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d4100: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d4100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d4104: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3d4104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d4108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d4108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d410c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3d410cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3d4110: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3d4110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3d4114: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3d4114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x3d4118: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4118u;
        // 0x3d411c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4120u;
}
