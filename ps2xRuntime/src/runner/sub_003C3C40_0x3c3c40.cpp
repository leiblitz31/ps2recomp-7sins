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

// Function: sub_003C3C40
// Address: 0x3c3c40 - 0x3c3d98
void sub_003C3C40_0x3c3c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3C40_0x3c3c40");
#endif

    switch (ctx->pc) {
        case 0x3c3d38u: goto label_3c3d38;
        case 0x3c3d64u: goto label_3c3d64;
        default: break;
    }

    ctx->pc = 0x3c3c40u;

    // 0x3c3c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c3c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c3c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c3c48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c3c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c3c4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c3c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c3c50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c3c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c3c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c3c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c3c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3c5c: 0xde080010  ld          $t0, 0x10($s0)
    ctx->pc = 0x3c3c5cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c3c60: 0x10e2000f  beq         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3C3C60u;
    {
        const bool branch_taken_0x3c3c60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C60u;
        // 0x3c3c64: 0xde040000  ld          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c60) {
            ctx->pc = 0x3C3CA0u;
            goto label_3c3ca0;
        }
    }
    ctx->pc = 0x3C3C68u;
    // 0x3c3c68: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x3c3c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c3c6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3C6Cu;
    {
        const bool branch_taken_0x3c3c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C6Cu;
        // 0x3c3c70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c6c) {
            ctx->pc = 0x3C3C84u;
            goto label_3c3c84;
        }
    }
    ctx->pc = 0x3C3C74u;
    // 0x3c3c74: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C3C74u;
    {
        const bool branch_taken_0x3c3c74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C74u;
        // 0x3c3c78: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c74) {
            ctx->pc = 0x3C3C98u;
            goto label_3c3c98;
        }
    }
    ctx->pc = 0x3C3C7Cu;
    // 0x3c3c7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3C3C7Cu;
    {
        const bool branch_taken_0x3c3c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C7Cu;
        // 0x3c3c80: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c7c) {
            ctx->pc = 0x3C3CB8u;
            goto label_3c3cb8;
        }
    }
    ctx->pc = 0x3C3C84u;
label_3c3c84:
    // 0x3c3c84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c3c88: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C3C88u;
    {
        const bool branch_taken_0x3c3c88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C88u;
        // 0x3c3c8c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c88) {
            ctx->pc = 0x3C3CACu;
            goto label_3c3cac;
        }
    }
    ctx->pc = 0x3C3C90u;
    // 0x3c3c90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C3C90u;
    {
        const bool branch_taken_0x3c3c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C90u;
        // 0x3c3c94: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c90) {
            ctx->pc = 0x3C3CB8u;
            goto label_3c3cb8;
        }
    }
    ctx->pc = 0x3C3C98u;
label_3c3c98:
    // 0x3c3c98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C3C98u;
    {
        const bool branch_taken_0x3c3c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C98u;
        // 0x3c3c9c: 0xffa60000  sd          $a2, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c98) {
            ctx->pc = 0x3C3CC0u;
            goto label_3c3cc0;
        }
    }
    ctx->pc = 0x3C3CA0u;
label_3c3ca0:
    // 0x3c3ca0: 0xc8102d  daddu       $v0, $a2, $t0
    ctx->pc = 0x3c3ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
    // 0x3c3ca4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3CA4u;
    {
        const bool branch_taken_0x3c3ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CA4u;
        // 0x3c3ca8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ca4) {
            ctx->pc = 0x3C3CC0u;
            goto label_3c3cc0;
        }
    }
    ctx->pc = 0x3C3CACu;
label_3c3cac:
    // 0x3c3cac: 0x86102f  dsubu       $v0, $a0, $a2
    ctx->pc = 0x3c3cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 6));
    // 0x3c3cb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3CB0u;
    {
        const bool branch_taken_0x3c3cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CB0u;
        // 0x3c3cb4: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3cb0) {
            ctx->pc = 0x3C3CC0u;
            goto label_3c3cc0;
        }
    }
    ctx->pc = 0x3C3CB8u;
label_3c3cb8:
    // 0x3c3cb8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3C3CB8u;
    {
        const bool branch_taken_0x3c3cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CB8u;
        // 0x3c3cbc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3cb8) {
            ctx->pc = 0x3C3D7Cu;
            goto label_3c3d7c;
        }
    }
    ctx->pc = 0x3C3CC0u;
label_3c3cc0:
    // 0x3c3cc0: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x3c3cc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3cc4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x3c3cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3cc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3CC8u;
    {
        const bool branch_taken_0x3c3cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3cc8) {
            ctx->pc = 0x3C3CD8u;
            goto label_3c3cd8;
        }
    }
    ctx->pc = 0x3C3CD0u;
    // 0x3c3cd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3CD0u;
    {
        const bool branch_taken_0x3c3cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CD0u;
        // 0x3c3cd4: 0xffa40000  sd          $a0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3cd0) {
            ctx->pc = 0x3C3CE0u;
            goto label_3c3ce0;
        }
    }
    ctx->pc = 0x3C3CD8u;
label_3c3cd8:
    // 0x3c3cd8: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C3CD8u;
    {
        const bool branch_taken_0x3c3cd8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3c3cd8) {
            ctx->pc = 0x3C3CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3CD8u;
            // 0x3c3cdc: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3CE0u;
            goto label_3c3ce0;
        }
    }
    ctx->pc = 0x3C3CE0u;
label_3c3ce0:
    // 0x3c3ce0: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x3c3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3c3ce4: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x3c3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x3c3ce8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x3c3ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3cec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C3CECu;
    {
        const bool branch_taken_0x3c3cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CECu;
        // 0x3c3cf0: 0xdfa70000  ld          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3cec) {
            ctx->pc = 0x3C3D40u;
            goto label_3c3d40;
        }
    }
    ctx->pc = 0x3C3CF4u;
    // 0x3c3cf4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3c3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c3cf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c3cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3cfc: 0x103282d  daddu       $a1, $t0, $v1
    ctx->pc = 0x3c3cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3c3d00: 0x102202f  dsubu       $a0, $t0, $v0
    ctx->pc = 0x3c3d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) - GPR_U64(ctx, 2));
    // 0x3c3d04: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x3c3d04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c3d08: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3C3D08u;
    {
        const bool branch_taken_0x3c3d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3d08) {
            ctx->pc = 0x3C3D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3D08u;
            // 0x3c3d0c: 0x8e03006c  lw          $v1, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3D40u;
            goto label_3c3d40;
        }
    }
    ctx->pc = 0x3C3D10u;
    // 0x3c3d10: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x3c3d10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c3d14: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3C3D14u;
    {
        const bool branch_taken_0x3c3d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3d14) {
            ctx->pc = 0x3C3D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3D14u;
            // 0x3c3d18: 0x8e03006c  lw          $v1, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3D40u;
            goto label_3c3d40;
        }
    }
    ctx->pc = 0x3C3D1Cu;
    // 0x3c3d1c: 0xe4102f  dsubu       $v0, $a3, $a0
    ctx->pc = 0x3c3d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 4));
    // 0x3c3d20: 0xfe070010  sd          $a3, 0x10($s0)
    ctx->pc = 0x3c3d20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 7));
    // 0x3c3d24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c3d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c3d28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c3d28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c3d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3d30: 0xc0f0930  jal         func_3C24C0
    ctx->pc = 0x3C3D30u;
    SET_GPR_U32(ctx, 31, 0x3C3D38u);
    ctx->pc = 0x3C3D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D30u;
    // 0x3c3d34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C24C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C24C0u, 0x3C3D30u, 0x3C3D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3D38u;
label_3c3d38:
    // 0x3c3d38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C3D38u;
    {
        const bool branch_taken_0x3c3d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D38u;
        // 0x3c3d3c: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d38) {
            ctx->pc = 0x3C3D7Cu;
            goto label_3c3d7c;
        }
    }
    ctx->pc = 0x3C3D40u;
label_3c3d40:
    // 0x3c3d40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c3d44: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3c3d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3c3d48: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x3c3d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3c3d4c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3c3d4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3c3d50: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x3c3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x3c3d54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c3d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3d58: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x3c3d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x3c3d5c: 0xc0c0cbc  jal         func_3032F0
    ctx->pc = 0x3C3D5Cu;
    SET_GPR_U32(ctx, 31, 0x3C3D64u);
    ctx->pc = 0x3C3D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D5Cu;
    // 0x3c3d60: 0xfe070010  sd          $a3, 0x10($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032F0u, 0x3C3D5Cu, 0x3C3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3D64u;
label_3c3d64:
    // 0x3c3d64: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3c3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3c3d68: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3D68u;
    {
        const bool branch_taken_0x3c3d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3d68) {
            ctx->pc = 0x3C3D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3D68u;
            // 0x3c3d6c: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3D7Cu;
            goto label_3c3d7c;
        }
    }
    ctx->pc = 0x3C3D70u;
    // 0x3c3d70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c3d74: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x3c3d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x3c3d78: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3c3d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3c3d7c:
    // 0x3c3d7c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3c3d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3c3d80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c3d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3d84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c3d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c3d88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c3d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c3d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c3d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c3d90: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D90u;
        // 0x3c3d94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3D98u;
}
