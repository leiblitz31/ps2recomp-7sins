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

// Function: sub_002E3E10
// Address: 0x2e3e10 - 0x2e3f50
void sub_002E3E10_0x2e3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3E10_0x2e3e10");
#endif

    switch (ctx->pc) {
        case 0x2e3e48u: goto label_2e3e48;
        case 0x2e3e54u: goto label_2e3e54;
        case 0x2e3e60u: goto label_2e3e60;
        case 0x2e3e70u: goto label_2e3e70;
        case 0x2e3e8cu: goto label_2e3e8c;
        case 0x2e3ea0u: goto label_2e3ea0;
        case 0x2e3eb4u: goto label_2e3eb4;
        case 0x2e3ec0u: goto label_2e3ec0;
        case 0x2e3ed4u: goto label_2e3ed4;
        case 0x2e3eecu: goto label_2e3eec;
        case 0x2e3f08u: goto label_2e3f08;
        case 0x2e3f14u: goto label_2e3f14;
        case 0x2e3f28u: goto label_2e3f28;
        default: break;
    }

    ctx->pc = 0x2e3e10u;

    // 0x2e3e10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e3e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e3e14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e3e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e3e18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e3e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e3e1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e3e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e3e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3e28: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2e3e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2e3e2c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2e3e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2e3e30: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2e3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2e3e34: 0x8f82bcb0  lw          $v0, -0x4350($gp)
    ctx->pc = 0x2e3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2e3e38: 0x8c510044  lw          $s1, 0x44($v0)
    ctx->pc = 0x2e3e38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2e3e3c: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x2e3e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x2e3e40: 0xc09d670  jal         func_2759C0
    ctx->pc = 0x2E3E40u;
    SET_GPR_U32(ctx, 31, 0x2E3E48u);
    ctx->pc = 0x2759C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2759C0u, 0x2E3E40u, 0x2E3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E48u;
label_2e3e48:
    // 0x2e3e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e3e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e4c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2E3E4Cu;
    {
        const bool branch_taken_0x2e3e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3e4c) {
            ctx->pc = 0x2E3EE0u;
            goto label_2e3ee0;
        }
    }
    ctx->pc = 0x2E3E54u;
label_2e3e54:
    // 0x2e3e54: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2e3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3e58: 0xc041874  jal         func_1061D0
    ctx->pc = 0x2E3E58u;
    SET_GPR_U32(ctx, 31, 0x2E3E60u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x2E3E58u, 0x2E3E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E60u;
label_2e3e60:
    // 0x2e3e60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e3e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e3e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e3e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e68: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2E3E68u;
    SET_GPR_U32(ctx, 31, 0x2E3E70u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2E3E68u, 0x2E3E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E70u;
label_2e3e70:
    // 0x2e3e70: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E3E70u;
    {
        const bool branch_taken_0x2e3e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3e70) {
            ctx->pc = 0x2E3EDCu;
            goto label_2e3edc;
        }
    }
    ctx->pc = 0x2E3E78u;
    // 0x2e3e78: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3e7c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e3e80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e84: 0xc0b2fb4  jal         func_2CBED0
    ctx->pc = 0x2E3E84u;
    SET_GPR_U32(ctx, 31, 0x2E3E8Cu);
    ctx->pc = 0x2CBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBED0u, 0x2E3E84u, 0x2E3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E8Cu;
label_2e3e8c:
    // 0x2e3e8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3e90: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2e3e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2e3e94: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2e3e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e3e98: 0xc0444e0  jal         func_111380
    ctx->pc = 0x2E3E98u;
    SET_GPR_U32(ctx, 31, 0x2E3EA0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2E3E98u, 0x2E3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EA0u;
label_2e3ea0:
    // 0x2e3ea0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3ea4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e3ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2e3ea8: 0x24a5e668  addiu       $a1, $a1, -0x1998
    ctx->pc = 0x2e3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960744));
    // 0x2e3eac: 0xc040304  jal         func_100C10
    ctx->pc = 0x2E3EACu;
    SET_GPR_U32(ctx, 31, 0x2E3EB4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2E3EACu, 0x2E3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EB4u;
label_2e3eb4:
    // 0x2e3eb4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e3eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3eb8: 0xc1163b8  jal         func_458EE0
    ctx->pc = 0x2E3EB8u;
    SET_GPR_U32(ctx, 31, 0x2E3EC0u);
    ctx->pc = 0x458EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458EE0u, 0x2E3EB8u, 0x2E3EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EC0u;
label_2e3ec0:
    // 0x2e3ec0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e3ec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ec4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e3ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3ec8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e3ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3ecc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2E3ECCu;
    SET_GPR_U32(ctx, 31, 0x2E3ED4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2E3ECCu, 0x2E3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3ED4u;
label_2e3ed4:
    // 0x2e3ed4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E3ED4u;
    {
        const bool branch_taken_0x2e3ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ed4) {
            ctx->pc = 0x2E3F28u;
            goto label_2e3f28;
        }
    }
    ctx->pc = 0x2E3EDCu;
label_2e3edc:
    // 0x2e3edc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e3edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e3ee0:
    // 0x2e3ee0: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x2e3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x2e3ee4: 0xc0b2e10  jal         func_2CB840
    ctx->pc = 0x2E3EE4u;
    SET_GPR_U32(ctx, 31, 0x2E3EECu);
    ctx->pc = 0x2CB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB840u, 0x2E3EE4u, 0x2E3EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EECu;
label_2e3eec:
    // 0x2e3eec: 0x1602ffd9  bne         $s0, $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2E3EECu;
    {
        const bool branch_taken_0x2e3eec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3eec) {
            ctx->pc = 0x2E3E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3e54;
        }
    }
    ctx->pc = 0x2E3EF4u;
    // 0x2e3ef4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e3ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e3ef8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e3ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2e3efc: 0x24a5e668  addiu       $a1, $a1, -0x1998
    ctx->pc = 0x2e3efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960744));
    // 0x2e3f00: 0xc040304  jal         func_100C10
    ctx->pc = 0x2E3F00u;
    SET_GPR_U32(ctx, 31, 0x2E3F08u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2E3F00u, 0x2E3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F08u;
label_2e3f08:
    // 0x2e3f08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e3f0c: 0xc1163b8  jal         func_458EE0
    ctx->pc = 0x2E3F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F14u);
    ctx->pc = 0x458EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458EE0u, 0x2E3F0Cu, 0x2E3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F14u;
label_2e3f14:
    // 0x2e3f14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e3f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e3f1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e3f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3f20: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2E3F20u;
    SET_GPR_U32(ctx, 31, 0x2E3F28u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2E3F20u, 0x2E3F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F28u;
label_2e3f28:
    // 0x2e3f28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e3f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3f2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3f30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e3f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3f3c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2e3f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e3f40: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3F48u;
    // 0x2e3f48: 0x0  nop
    ctx->pc = 0x2e3f48u;
    // NOP
    // 0x2e3f4c: 0x0  nop
    ctx->pc = 0x2e3f4cu;
    // NOP
    ctx->pc = 0x2e3f50u;
}
