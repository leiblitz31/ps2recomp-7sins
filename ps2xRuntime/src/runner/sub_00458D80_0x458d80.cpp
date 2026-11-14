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

// Function: sub_00458D80
// Address: 0x458d80 - 0x458e70
void sub_00458D80_0x458d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458D80_0x458d80");
#endif

    switch (ctx->pc) {
        case 0x458dacu: goto label_458dac;
        case 0x458db8u: goto label_458db8;
        case 0x458dc4u: goto label_458dc4;
        case 0x458de4u: goto label_458de4;
        case 0x458df8u: goto label_458df8;
        case 0x458e14u: goto label_458e14;
        case 0x458e28u: goto label_458e28;
        case 0x458e44u: goto label_458e44;
        default: break;
    }

    ctx->pc = 0x458d80u;

    // 0x458d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x458d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x458d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x458d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x458d88: 0x8f82bf40  lw          $v0, -0x40C0($gp)
    ctx->pc = 0x458d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950720)));
    // 0x458d8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x458D8Cu;
    {
        const bool branch_taken_0x458d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458d8c) {
            ctx->pc = 0x458DBCu;
            goto label_458dbc;
        }
    }
    ctx->pc = 0x458D94u;
    // 0x458d94: 0x8f82bf40  lw          $v0, -0x40C0($gp)
    ctx->pc = 0x458d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950720)));
    // 0x458d98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x458D98u;
    {
        const bool branch_taken_0x458d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458d98) {
            ctx->pc = 0x458DBCu;
            goto label_458dbc;
        }
    }
    ctx->pc = 0x458DA0u;
    // 0x458da0: 0x8f84bf40  lw          $a0, -0x40C0($gp)
    ctx->pc = 0x458da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950720)));
    // 0x458da4: 0xc09a338  jal         func_268CE0
    ctx->pc = 0x458DA4u;
    SET_GPR_U32(ctx, 31, 0x458DACu);
    ctx->pc = 0x268CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268CE0u, 0x458DA4u, 0x458DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458DACu;
label_458dac:
    // 0x458dac: 0x8f84bf40  lw          $a0, -0x40C0($gp)
    ctx->pc = 0x458dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950720)));
    // 0x458db0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x458DB0u;
    SET_GPR_U32(ctx, 31, 0x458DB8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x458DB0u, 0x458DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458DB8u;
label_458db8:
    // 0x458db8: 0xaf80bf40  sw          $zero, -0x40C0($gp)
    ctx->pc = 0x458db8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950720), GPR_U32(ctx, 0));
label_458dbc:
    // 0x458dbc: 0xc115b54  jal         func_456D50
    ctx->pc = 0x458DBCu;
    SET_GPR_U32(ctx, 31, 0x458DC4u);
    ctx->pc = 0x456D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456D50u, 0x458DBCu, 0x458DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458DC4u;
label_458dc4:
    // 0x458dc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x458dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x458dc8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x458DC8u;
    {
        const bool branch_taken_0x458dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458dc8) {
            ctx->pc = 0x458DF0u;
            goto label_458df0;
        }
    }
    ctx->pc = 0x458DD0u;
    // 0x458dd0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x458dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x458dd4: 0x2484e6f0  addiu       $a0, $a0, -0x1910
    ctx->pc = 0x458dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960880));
    // 0x458dd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x458dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458ddc: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x458DDCu;
    SET_GPR_U32(ctx, 31, 0x458DE4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x458DDCu, 0x458DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458DE4u;
label_458de4:
    // 0x458de4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x458de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x458de8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x458DE8u;
    {
        const bool branch_taken_0x458de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458de8) {
            ctx->pc = 0x458E54u;
            goto label_458e54;
        }
    }
    ctx->pc = 0x458DF0u;
label_458df0:
    // 0x458df0: 0xc115bfc  jal         func_456FF0
    ctx->pc = 0x458DF0u;
    SET_GPR_U32(ctx, 31, 0x458DF8u);
    ctx->pc = 0x456FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456FF0u, 0x458DF0u, 0x458DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458DF8u;
label_458df8:
    // 0x458df8: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x458DF8u;
    {
        const bool branch_taken_0x458df8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x458df8) {
            ctx->pc = 0x458E20u;
            goto label_458e20;
        }
    }
    ctx->pc = 0x458E00u;
    // 0x458e00: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x458e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x458e04: 0x2484e720  addiu       $a0, $a0, -0x18E0
    ctx->pc = 0x458e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960928));
    // 0x458e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x458e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458e0c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x458E0Cu;
    SET_GPR_U32(ctx, 31, 0x458E14u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x458E0Cu, 0x458E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458E14u;
label_458e14:
    // 0x458e14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x458e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x458e18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x458E18u;
    {
        const bool branch_taken_0x458e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458e18) {
            ctx->pc = 0x458E54u;
            goto label_458e54;
        }
    }
    ctx->pc = 0x458E20u;
label_458e20:
    // 0x458e20: 0xc1199e0  jal         func_466780
    ctx->pc = 0x458E20u;
    SET_GPR_U32(ctx, 31, 0x458E28u);
    ctx->pc = 0x466780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466780u, 0x458E20u, 0x458E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458E28u;
label_458e28:
    // 0x458e28: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x458E28u;
    {
        const bool branch_taken_0x458e28 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x458e28) {
            ctx->pc = 0x458E50u;
            goto label_458e50;
        }
    }
    ctx->pc = 0x458E30u;
    // 0x458e30: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x458e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x458e34: 0x2484e760  addiu       $a0, $a0, -0x18A0
    ctx->pc = 0x458e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960992));
    // 0x458e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x458e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458e3c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x458E3Cu;
    SET_GPR_U32(ctx, 31, 0x458E44u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x458E3Cu, 0x458E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458E44u;
label_458e44:
    // 0x458e44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x458e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x458e48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x458E48u;
    {
        const bool branch_taken_0x458e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458e48) {
            ctx->pc = 0x458E54u;
            goto label_458e54;
        }
    }
    ctx->pc = 0x458E50u;
label_458e50:
    // 0x458e50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x458e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_458e54:
    // 0x458e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x458e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458e58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x458e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x458e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x458E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458E64u;
    // 0x458e64: 0x0  nop
    ctx->pc = 0x458e64u;
    // NOP
    // 0x458e68: 0x0  nop
    ctx->pc = 0x458e68u;
    // NOP
    // 0x458e6c: 0x0  nop
    ctx->pc = 0x458e6cu;
    // NOP
    ctx->pc = 0x458e70u;
}
