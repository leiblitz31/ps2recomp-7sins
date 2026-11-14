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

// Function: sub_004B3C30
// Address: 0x4b3c30 - 0x4b3ea0
void sub_004B3C30_0x4b3c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3C30_0x4b3c30");
#endif

    switch (ctx->pc) {
        case 0x4b3d28u: goto label_4b3d28;
        case 0x4b3d30u: goto label_4b3d30;
        case 0x4b3d60u: goto label_4b3d60;
        case 0x4b3d84u: goto label_4b3d84;
        case 0x4b3db0u: goto label_4b3db0;
        case 0x4b3dd0u: goto label_4b3dd0;
        case 0x4b3e34u: goto label_4b3e34;
        default: break;
    }

    ctx->pc = 0x4b3c30u;

    // 0x4b3c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b3c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b3c34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4b3c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4b3c38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4b3c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4b3c3c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4b3c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b3c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b3c44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b3c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3c48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4b3c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4b3c4c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4b3c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3c54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b3c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3c58: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x4b3c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x4b3c5c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4b3c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4b3c60: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4B3C60u;
    {
        const bool branch_taken_0x4b3c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3C60u;
        // 0x4b3c64: 0x2668002c  addiu       $t0, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3c60) {
            ctx->pc = 0x4B3D68u;
            goto label_4b3d68;
        }
    }
    ctx->pc = 0x4B3C68u;
    // 0x4b3c68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b3c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3c6c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x4b3c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4b3c70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B3C70u;
    {
        const bool branch_taken_0x4b3c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3C70u;
        // 0x4b3c74: 0x2322821  addu        $a1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3c70) {
            ctx->pc = 0x4B3C88u;
            goto label_4b3c88;
        }
    }
    ctx->pc = 0x4B3C78u;
    // 0x4b3c78: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3C78u;
    {
        const bool branch_taken_0x4b3c78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3C78u;
        // 0x4b3c7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3c78) {
            ctx->pc = 0x4B3C8Cu;
            goto label_4b3c8c;
        }
    }
    ctx->pc = 0x4B3C80u;
    // 0x4b3c80: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x4b3c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x4b3c84: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x4b3c84u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4b3c88:
    // 0x4b3c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b3c8c:
    // 0x4b3c8c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x4b3c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4b3c90: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B3C90u;
    {
        const bool branch_taken_0x4b3c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3c90) {
            ctx->pc = 0x4B3C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3C90u;
            // 0x4b3c94: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3CB4u;
            goto label_4b3cb4;
        }
    }
    ctx->pc = 0x4B3C98u;
    // 0x4b3c98: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B3C98u;
    {
        const bool branch_taken_0x4b3c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3C98u;
        // 0x4b3c9c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3c98) {
            ctx->pc = 0x4B3CB0u;
            goto label_4b3cb0;
        }
    }
    ctx->pc = 0x4B3CA0u;
    // 0x4b3ca0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4b3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4b3ca4: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x4b3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4b3ca8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4b3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b3cac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4b3cacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b3cb0:
    // 0x4b3cb0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4b3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_4b3cb4:
    // 0x4b3cb4: 0x2444fff1  addiu       $a0, $v0, -0xF
    ctx->pc = 0x4b3cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x4b3cb8: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x4b3cb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4b3cbc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B3CBCu;
    {
        const bool branch_taken_0x4b3cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3CBCu;
        // 0x4b3cc0: 0xa4102b  sltu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3cbc) {
            ctx->pc = 0x4B3CDCu;
            goto label_4b3cdc;
        }
    }
    ctx->pc = 0x4B3CC4u;
    // 0x4b3cc4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B3CC4u;
    {
        const bool branch_taken_0x4b3cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3CC4u;
        // 0x4b3cc8: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3cc4) {
            ctx->pc = 0x4B3CDCu;
            goto label_4b3cdc;
        }
    }
    ctx->pc = 0x4B3CCCu;
    // 0x4b3ccc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b3cd0: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x4b3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4b3cd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4b3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b3cd8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4b3cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b3cdc:
    // 0x4b3cdc: 0x50c0000f  beql        $a2, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4B3CDCu;
    {
        const bool branch_taken_0x4b3cdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3cdc) {
            ctx->pc = 0x4B3CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3CDCu;
            // 0x4b3ce0: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3D1Cu;
            goto label_4b3d1c;
        }
    }
    ctx->pc = 0x4B3CE4u;
    // 0x4b3ce4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4b3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4b3ce8: 0x2444ffe1  addiu       $a0, $v0, -0x1F
    ctx->pc = 0x4b3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967265));
    // 0x4b3cec: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x4b3cecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4b3cf0: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4B3CF0u;
    {
        const bool branch_taken_0x4b3cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3cf0) {
            ctx->pc = 0x4B3CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3CF0u;
            // 0x4b3cf4: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3D1Cu;
            goto label_4b3d1c;
        }
    }
    ctx->pc = 0x4B3CF8u;
    // 0x4b3cf8: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x4b3cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4b3cfc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B3CFCu;
    {
        const bool branch_taken_0x4b3cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3cfc) {
            ctx->pc = 0x4B3D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3CFCu;
            // 0x4b3d00: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3D1Cu;
            goto label_4b3d1c;
        }
    }
    ctx->pc = 0x4B3D04u;
    // 0x4b3d04: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x4b3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4b3d08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b3d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b3d0c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x4b3d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4b3d10: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4b3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b3d14: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4b3d14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4b3d18: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x4b3d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_4b3d1c:
    // 0x4b3d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d20: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4B3D20u;
    SET_GPR_U32(ctx, 31, 0x4B3D28u);
    ctx->pc = 0x4B3D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3D20u;
    // 0x4b3d24: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B3D20u, 0x4B3D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3D28u;
label_4b3d28:
    // 0x4b3d28: 0xc12d092  jal         func_4B4248
    ctx->pc = 0x4B3D28u;
    SET_GPR_U32(ctx, 31, 0x4B3D30u);
    ctx->pc = 0x4B3D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3D28u;
    // 0x4b3d2c: 0x8e64004c  lw          $a0, 0x4C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4248u, 0x4B3D28u, 0x4B3D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3D30u;
label_4b3d30:
    // 0x4b3d30: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4b3d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3d34: 0x2643003f  addiu       $v1, $s2, 0x3F
    ctx->pc = 0x4b3d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x4b3d38: 0x34c6ffc0  ori         $a2, $a2, 0xFFC0
    ctx->pc = 0x4b3d38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65472);
    // 0x4b3d3c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x4b3d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4b3d40: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x4b3d40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4b3d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b3d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d48: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x4b3d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4b3d4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b3d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b3d50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b3d54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d58: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B3D58u;
    SET_GPR_U32(ctx, 31, 0x4B3D60u);
    ctx->pc = 0x4B3D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3D58u;
    // 0x4b3d5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B3D58u, 0x4B3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3D60u;
label_4b3d60:
    // 0x4b3d60: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x4B3D60u;
    {
        const bool branch_taken_0x4b3d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3D60u;
        // 0x4b3d64: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3d60) {
            ctx->pc = 0x4B3E84u;
            goto label_4b3e84;
        }
    }
    ctx->pc = 0x4B3D68u;
label_4b3d68:
    // 0x4b3d68: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4b3d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x4b3d6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B3D6Cu;
    {
        const bool branch_taken_0x4b3d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3D6Cu;
        // 0x4b3d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3d6c) {
            ctx->pc = 0x4B3D8Cu;
            goto label_4b3d8c;
        }
    }
    ctx->pc = 0x4B3D74u;
    // 0x4b3d74: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x4b3d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x4b3d78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4b3d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d7c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4B3D7Cu;
    SET_GPR_U32(ctx, 31, 0x4B3D84u);
    ctx->pc = 0x4B3D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3D7Cu;
    // 0x4b3d80: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4B3D7Cu, 0x4B3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3D84u;
label_4b3d84:
    // 0x4b3d84: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x4B3D84u;
    {
        const bool branch_taken_0x4b3d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3D84u;
        // 0x4b3d88: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3d84) {
            ctx->pc = 0x4B3E84u;
            goto label_4b3e84;
        }
    }
    ctx->pc = 0x4B3D8Cu;
label_4b3d8c:
    // 0x4b3d8c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4b3d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x4b3d90: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x4B3D90u;
    {
        const bool branch_taken_0x4b3d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3D90u;
        // 0x4b3d94: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3d90) {
            ctx->pc = 0x4B3E78u;
            goto label_4b3e78;
        }
    }
    ctx->pc = 0x4B3D98u;
    // 0x4b3d98: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x4b3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x4b3d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3da0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b3da0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3da4: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x4B3DA4u;
    {
        const bool branch_taken_0x4b3da4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3DA4u;
        // 0x4b3da8: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3da4) {
            ctx->pc = 0x4B3E80u;
            goto label_4b3e80;
        }
    }
    ctx->pc = 0x4B3DACu;
    // 0x4b3dac: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x4b3dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4b3db0:
    // 0x4b3db0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x4b3db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3db4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4b3db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4b3db8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B3DB8u;
    {
        const bool branch_taken_0x4b3db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3DB8u;
        // 0x4b3dbc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3db8) {
            ctx->pc = 0x4B3E24u;
            goto label_4b3e24;
        }
    }
    ctx->pc = 0x4B3DC0u;
    // 0x4b3dc0: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x4b3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x4b3dc4: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x4b3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x4b3dc8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b3dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3dcc: 0x25220200  addiu       $v0, $t1, 0x200
    ctx->pc = 0x4b3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
label_4b3dd0:
    // 0x4b3dd0: 0x68e50007  ldl         $a1, 0x7($a3)
    ctx->pc = 0x4b3dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4b3dd4: 0x6ce50000  ldr         $a1, 0x0($a3)
    ctx->pc = 0x4b3dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4b3dd8: 0x68e9000f  ldl         $t1, 0xF($a3)
    ctx->pc = 0x4b3dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x4b3ddc: 0x6ce90008  ldr         $t1, 0x8($a3)
    ctx->pc = 0x4b3ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4b3de0: 0x68ea0017  ldl         $t2, 0x17($a3)
    ctx->pc = 0x4b3de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x4b3de4: 0x6cea0010  ldr         $t2, 0x10($a3)
    ctx->pc = 0x4b3de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x4b3de8: 0x68eb001f  ldl         $t3, 0x1F($a3)
    ctx->pc = 0x4b3de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x4b3dec: 0x6ceb0018  ldr         $t3, 0x18($a3)
    ctx->pc = 0x4b3decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x4b3df0: 0xb1050007  sdl         $a1, 0x7($t0)
    ctx->pc = 0x4b3df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3df4: 0xb5050000  sdr         $a1, 0x0($t0)
    ctx->pc = 0x4b3df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3df8: 0xb109000f  sdl         $t1, 0xF($t0)
    ctx->pc = 0x4b3df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3dfc: 0xb5090008  sdr         $t1, 0x8($t0)
    ctx->pc = 0x4b3dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3e00: 0xb10a0017  sdl         $t2, 0x17($t0)
    ctx->pc = 0x4b3e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3e04: 0xb50a0010  sdr         $t2, 0x10($t0)
    ctx->pc = 0x4b3e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3e08: 0xb10b001f  sdl         $t3, 0x1F($t0)
    ctx->pc = 0x4b3e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3e0c: 0xb50b0018  sdr         $t3, 0x18($t0)
    ctx->pc = 0x4b3e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3e10: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x4b3e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x4b3e14: 0x14e6ffee  bne         $a3, $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4B3E14u;
    {
        const bool branch_taken_0x4b3e14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x4B3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3E14u;
        // 0x4b3e18: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3e14) {
            ctx->pc = 0x4B3DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3dd0;
        }
    }
    ctx->pc = 0x4B3E1Cu;
    // 0x4b3e1c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4B3E1Cu;
    {
        const bool branch_taken_0x4b3e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3E1Cu;
        // 0x4b3e20: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3e1c) {
            ctx->pc = 0x4B3E64u;
            goto label_4b3e64;
        }
    }
    ctx->pc = 0x4B3E24u;
label_4b3e24:
    // 0x4b3e24: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x4b3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x4b3e28: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x4b3e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x4b3e2c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b3e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3e30: 0x25220200  addiu       $v0, $t1, 0x200
    ctx->pc = 0x4b3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
label_4b3e34:
    // 0x4b3e34: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x4b3e34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b3e38: 0xdce90008  ld          $t1, 0x8($a3)
    ctx->pc = 0x4b3e38u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4b3e3c: 0xdcea0010  ld          $t2, 0x10($a3)
    ctx->pc = 0x4b3e3cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4b3e40: 0xdceb0018  ld          $t3, 0x18($a3)
    ctx->pc = 0x4b3e40u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4b3e44: 0xfd050000  sd          $a1, 0x0($t0)
    ctx->pc = 0x4b3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 5));
    // 0x4b3e48: 0xfd090008  sd          $t1, 0x8($t0)
    ctx->pc = 0x4b3e48u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 9));
    // 0x4b3e4c: 0xfd0a0010  sd          $t2, 0x10($t0)
    ctx->pc = 0x4b3e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 10));
    // 0x4b3e50: 0xfd0b0018  sd          $t3, 0x18($t0)
    ctx->pc = 0x4b3e50u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 11));
    // 0x4b3e54: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x4b3e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x4b3e58: 0x14e6fff6  bne         $a3, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x4B3E58u;
    {
        const bool branch_taken_0x4b3e58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x4B3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3E58u;
        // 0x4b3e5c: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3e58) {
            ctx->pc = 0x4B3E34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3e34;
        }
    }
    ctx->pc = 0x4B3E60u;
    // 0x4b3e60: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4b3e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b3e64:
    // 0x4b3e64: 0x132102b  sltu        $v0, $t1, $s2
    ctx->pc = 0x4b3e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4b3e68: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x4B3E68u;
    {
        const bool branch_taken_0x4b3e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3E68u;
        // 0x4b3e6c: 0x831025  or          $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3e68) {
            ctx->pc = 0x4B3DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3db0;
        }
    }
    ctx->pc = 0x4B3E70u;
    // 0x4b3e70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3E70u;
    {
        const bool branch_taken_0x4b3e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3E70u;
        // 0x4b3e74: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3e70) {
            ctx->pc = 0x4B3E84u;
            goto label_4b3e84;
        }
    }
    ctx->pc = 0x4B3E78u;
label_4b3e78:
    // 0x4b3e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B3E78u;
    {
        const bool branch_taken_0x4b3e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3E78u;
        // 0x4b3e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3e78) {
            ctx->pc = 0x4B3E84u;
            goto label_4b3e84;
        }
    }
    ctx->pc = 0x4B3E80u;
label_4b3e80:
    // 0x4b3e80: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b3e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b3e84:
    // 0x4b3e84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4b3e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b3e88: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4b3e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b3e8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b3e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b3e90: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4b3e90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3e98: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3E98u;
        // 0x4b3e9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3EA0u;
}
