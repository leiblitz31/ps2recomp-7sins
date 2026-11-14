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

// Function: sub_00168CC0
// Address: 0x168cc0 - 0x168e80
void sub_00168CC0_0x168cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168CC0_0x168cc0");
#endif

    switch (ctx->pc) {
        case 0x168cdcu: goto label_168cdc;
        case 0x168d5cu: goto label_168d5c;
        case 0x168d7cu: goto label_168d7c;
        case 0x168dacu: goto label_168dac;
        case 0x168e24u: goto label_168e24;
        case 0x168e50u: goto label_168e50;
        case 0x168e64u: goto label_168e64;
        default: break;
    }

    ctx->pc = 0x168cc0u;

    // 0x168cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168cc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x168cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x168ccc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x168cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168cd0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x168cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x168cd4: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x168CD4u;
    SET_GPR_U32(ctx, 31, 0x168CDCu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x168CD4u, 0x168CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CDCu;
label_168cdc:
    // 0x168cdc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x168cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x168ce0: 0x24633c70  addiu       $v1, $v1, 0x3C70
    ctx->pc = 0x168ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15472));
    // 0x168ce4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ce8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x168ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x168cec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168cf0: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x168cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x168cf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168cf8: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x168cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x168cfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d00: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x168d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x168d04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d08: 0xaf82babc  sw          $v0, -0x4544($gp)
    ctx->pc = 0x168d08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949564), GPR_U32(ctx, 2));
    // 0x168d0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168d14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x168d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168d18: 0x3e00008  jr          $ra
    ctx->pc = 0x168D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168D20u;
    // 0x168d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x168d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x168d2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x168d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x168d30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d34: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x168D34u;
    {
        const bool branch_taken_0x168d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d34) {
            ctx->pc = 0x168D7Cu;
            goto label_168d7c;
        }
    }
    ctx->pc = 0x168D3Cu;
    // 0x168d3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x168d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x168d40: 0x24633c70  addiu       $v1, $v1, 0x3C70
    ctx->pc = 0x168d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15472));
    // 0x168d44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x168d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x168d4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x168d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d54: 0xc055950  jal         func_156540
    ctx->pc = 0x168D54u;
    SET_GPR_U32(ctx, 31, 0x168D5Cu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x168D54u, 0x168D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D5Cu;
label_168d5c:
    // 0x168d5c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x168d5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168d60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x168d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x168d64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x168d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x168d68: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168D68u;
    {
        const bool branch_taken_0x168d68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x168d68) {
            ctx->pc = 0x168D7Cu;
            goto label_168d7c;
        }
    }
    ctx->pc = 0x168D70u;
    // 0x168d70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x168d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d74: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x168D74u;
    SET_GPR_U32(ctx, 31, 0x168D7Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x168D74u, 0x168D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D7Cu;
label_168d7c:
    // 0x168d7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168d84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x168d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168d88: 0x3e00008  jr          $ra
    ctx->pc = 0x168D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168D90u;
    // 0x168d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168d98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168d9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x168d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x168da0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x168da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168da4: 0xc055974  jal         func_1565D0
    ctx->pc = 0x168DA4u;
    SET_GPR_U32(ctx, 31, 0x168DACu);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x168DA4u, 0x168DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168DACu;
label_168dac:
    // 0x168dac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x168dacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168db0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x168db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x168db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168db8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168DB8u;
    {
        const bool branch_taken_0x168db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x168db8) {
            ctx->pc = 0x168DC8u;
            goto label_168dc8;
        }
    }
    ctx->pc = 0x168DC0u;
    // 0x168dc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168dc4: 0xaf828ee4  sw          $v0, -0x711C($gp)
    ctx->pc = 0x168dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 2));
label_168dc8:
    // 0x168dc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x168dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168dcc: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x168dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x168dd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ddc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x168ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168de0: 0x3e00008  jr          $ra
    ctx->pc = 0x168DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168DE8u;
    // 0x168de8: 0x0  nop
    ctx->pc = 0x168de8u;
    // NOP
    // 0x168dec: 0x0  nop
    ctx->pc = 0x168decu;
    // NOP
    // 0x168df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168dfc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x168dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x168e00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x168e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168e04: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x168e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x168e08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168E08u;
    {
        const bool branch_taken_0x168e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e08) {
            ctx->pc = 0x168E2Cu;
            goto label_168e2c;
        }
    }
    ctx->pc = 0x168E10u;
    // 0x168e10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x168e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168e14: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x168e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x168e18: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x168e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x168e1c: 0xc05a3f8  jal         func_168FE0
    ctx->pc = 0x168E1Cu;
    SET_GPR_U32(ctx, 31, 0x168E24u);
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x168E1Cu, 0x168E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E24u;
label_168e24:
    // 0x168e24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x168e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168e28: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x168e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_168e2c:
    // 0x168e2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x168e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168e30: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x168e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x168e34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168E34u;
    {
        const bool branch_taken_0x168e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e34) {
            ctx->pc = 0x168E58u;
            goto label_168e58;
        }
    }
    ctx->pc = 0x168E3Cu;
    // 0x168e3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x168e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168e40: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x168e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x168e44: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x168e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x168e48: 0xc05a3a0  jal         func_168E80
    ctx->pc = 0x168E48u;
    SET_GPR_U32(ctx, 31, 0x168E50u);
    ctx->pc = 0x168E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168E80u, 0x168E48u, 0x168E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E50u;
label_168e50:
    // 0x168e50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x168e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168e54: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x168e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_168e58:
    // 0x168e58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x168e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168e5c: 0xc0559ac  jal         func_1566B0
    ctx->pc = 0x168E5Cu;
    SET_GPR_U32(ctx, 31, 0x168E64u);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x168E5Cu, 0x168E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E64u;
label_168e64:
    // 0x168e64: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x168e64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168e68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168e70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168e74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x168e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168e78: 0x3e00008  jr          $ra
    ctx->pc = 0x168E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168E80u;
}
