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

// Function: sub_00238EA0
// Address: 0x238ea0 - 0x239000
void sub_00238EA0_0x238ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238EA0_0x238ea0");
#endif

    switch (ctx->pc) {
        case 0x238ec0u: goto label_238ec0;
        case 0x238ed0u: goto label_238ed0;
        case 0x238edcu: goto label_238edc;
        case 0x238eecu: goto label_238eec;
        case 0x238f04u: goto label_238f04;
        case 0x238f20u: goto label_238f20;
        case 0x238f38u: goto label_238f38;
        case 0x238f50u: goto label_238f50;
        case 0x238f68u: goto label_238f68;
        case 0x238f80u: goto label_238f80;
        case 0x238f9cu: goto label_238f9c;
        case 0x238fbcu: goto label_238fbc;
        case 0x238fdcu: goto label_238fdc;
        default: break;
    }

    ctx->pc = 0x238ea0u;

    // 0x238ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x238ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x238ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x238ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x238eb0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x238eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x238eb4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238eb8: 0xc041b48  jal         func_106D20
    ctx->pc = 0x238EB8u;
    SET_GPR_U32(ctx, 31, 0x238EC0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x238EB8u, 0x238EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EC0u;
label_238ec0:
    // 0x238ec0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238ec4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x238ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238ec8: 0xc1190f4  jal         func_4643D0
    ctx->pc = 0x238EC8u;
    SET_GPR_U32(ctx, 31, 0x238ED0u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x238EC8u, 0x238ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238ED0u;
label_238ed0:
    // 0x238ed0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238ed4: 0xc11931c  jal         func_464C70
    ctx->pc = 0x238ED4u;
    SET_GPR_U32(ctx, 31, 0x238EDCu);
    ctx->pc = 0x464C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C70u, 0x238ED4u, 0x238EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EDCu;
label_238edc:
    // 0x238edc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238ee0: 0x27859d48  addiu       $a1, $gp, -0x62B8
    ctx->pc = 0x238ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942024));
    // 0x238ee4: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x238EE4u;
    SET_GPR_U32(ctx, 31, 0x238EECu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x238EE4u, 0x238EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EECu;
label_238eec:
    // 0x238eec: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x238EECu;
    {
        const bool branch_taken_0x238eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238eec) {
            ctx->pc = 0x238FA4u;
            goto label_238fa4;
        }
    }
    ctx->pc = 0x238EF4u;
    // 0x238ef4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238ef8: 0x27859d50  addiu       $a1, $gp, -0x62B0
    ctx->pc = 0x238ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942032));
    // 0x238efc: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x238EFCu;
    SET_GPR_U32(ctx, 31, 0x238F04u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x238EFCu, 0x238F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F04u;
label_238f04:
    // 0x238f04: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x238F04u;
    {
        const bool branch_taken_0x238f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238f04) {
            ctx->pc = 0x238FA4u;
            goto label_238fa4;
        }
    }
    ctx->pc = 0x238F0Cu;
    // 0x238f0c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238f10: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x238f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x238f14: 0x24a5bb70  addiu       $a1, $a1, -0x4490
    ctx->pc = 0x238f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
    // 0x238f18: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x238F18u;
    SET_GPR_U32(ctx, 31, 0x238F20u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x238F18u, 0x238F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F20u;
label_238f20:
    // 0x238f20: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x238F20u;
    {
        const bool branch_taken_0x238f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238f20) {
            ctx->pc = 0x238FA4u;
            goto label_238fa4;
        }
    }
    ctx->pc = 0x238F28u;
    // 0x238f28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238f2c: 0x27859d58  addiu       $a1, $gp, -0x62A8
    ctx->pc = 0x238f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942040));
    // 0x238f30: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x238F30u;
    SET_GPR_U32(ctx, 31, 0x238F38u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x238F30u, 0x238F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F38u;
label_238f38:
    // 0x238f38: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x238F38u;
    {
        const bool branch_taken_0x238f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238f38) {
            ctx->pc = 0x238FA4u;
            goto label_238fa4;
        }
    }
    ctx->pc = 0x238F40u;
    // 0x238f40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238f44: 0x27859d60  addiu       $a1, $gp, -0x62A0
    ctx->pc = 0x238f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942048));
    // 0x238f48: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x238F48u;
    SET_GPR_U32(ctx, 31, 0x238F50u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x238F48u, 0x238F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F50u;
label_238f50:
    // 0x238f50: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x238F50u;
    {
        const bool branch_taken_0x238f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238f50) {
            ctx->pc = 0x238FA4u;
            goto label_238fa4;
        }
    }
    ctx->pc = 0x238F58u;
    // 0x238f58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238f5c: 0x27859d68  addiu       $a1, $gp, -0x6298
    ctx->pc = 0x238f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942056));
    // 0x238f60: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x238F60u;
    SET_GPR_U32(ctx, 31, 0x238F68u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x238F60u, 0x238F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F68u;
label_238f68:
    // 0x238f68: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x238F68u;
    {
        const bool branch_taken_0x238f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238f68) {
            ctx->pc = 0x238FA4u;
            goto label_238fa4;
        }
    }
    ctx->pc = 0x238F70u;
    // 0x238f70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238f74: 0x27859d70  addiu       $a1, $gp, -0x6290
    ctx->pc = 0x238f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942064));
    // 0x238f78: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x238F78u;
    SET_GPR_U32(ctx, 31, 0x238F80u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x238F78u, 0x238F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F80u;
label_238f80:
    // 0x238f80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x238F80u;
    {
        const bool branch_taken_0x238f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238f80) {
            ctx->pc = 0x238FA4u;
            goto label_238fa4;
        }
    }
    ctx->pc = 0x238F88u;
    // 0x238f88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238f8c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x238f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x238f90: 0x24a5bb80  addiu       $a1, $a1, -0x4480
    ctx->pc = 0x238f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949760));
    // 0x238f94: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x238F94u;
    SET_GPR_U32(ctx, 31, 0x238F9Cu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x238F94u, 0x238F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F9Cu;
label_238f9c:
    // 0x238f9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x238F9Cu;
    {
        const bool branch_taken_0x238f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238f9c) {
            ctx->pc = 0x238FC8u;
            goto label_238fc8;
        }
    }
    ctx->pc = 0x238FA4u;
label_238fa4:
    // 0x238fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238fa8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x238fa8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x238fac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238fb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x238fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238fb4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x238FB4u;
    SET_GPR_U32(ctx, 31, 0x238FBCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x238FB4u, 0x238FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FBCu;
label_238fbc:
    // 0x238fbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x238fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x238FC0u;
    {
        const bool branch_taken_0x238fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238fc0) {
            ctx->pc = 0x238FE0u;
            goto label_238fe0;
        }
    }
    ctx->pc = 0x238FC8u;
label_238fc8:
    // 0x238fc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x238fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fcc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x238fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238fd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x238fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238fd4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x238FD4u;
    SET_GPR_U32(ctx, 31, 0x238FDCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x238FD4u, 0x238FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FDCu;
label_238fdc:
    // 0x238fdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238fe0:
    // 0x238fe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x238fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238fec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x238fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x238ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x238FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238FF8u;
    // 0x238ff8: 0x0  nop
    ctx->pc = 0x238ff8u;
    // NOP
    // 0x238ffc: 0x0  nop
    ctx->pc = 0x238ffcu;
    // NOP
    ctx->pc = 0x239000u;
}
