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

// Function: sub_00484920
// Address: 0x484920 - 0x4849f0
void sub_00484920_0x484920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484920_0x484920");
#endif

    switch (ctx->pc) {
        case 0x48493cu: goto label_48493c;
        case 0x484944u: goto label_484944;
        case 0x48496cu: goto label_48496c;
        case 0x484978u: goto label_484978;
        case 0x484990u: goto label_484990;
        case 0x48499cu: goto label_48499c;
        case 0x4849b4u: goto label_4849b4;
        case 0x4849c8u: goto label_4849c8;
        default: break;
    }

    ctx->pc = 0x484920u;

    // 0x484920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x484920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x484924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x484924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x484928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48492c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48492cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x484930: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x484930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x484934: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x484934u;
    {
        const bool branch_taken_0x484934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484934) {
            ctx->pc = 0x484944u;
            goto label_484944;
        }
    }
    ctx->pc = 0x48493Cu;
label_48493c:
    // 0x48493c: 0xc0f0c7e  jal         func_3C31F8
    ctx->pc = 0x48493Cu;
    SET_GPR_U32(ctx, 31, 0x484944u);
    ctx->pc = 0x3C31F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C31F8u, 0x48493Cu, 0x484944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484944u;
label_484944:
    // 0x484944: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x484944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x484948: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x484948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x48494c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x484950: 0x0  nop
    ctx->pc = 0x484950u;
    // NOP
    // 0x484954: 0x1062fff9  beq         $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x484954u;
    {
        const bool branch_taken_0x484954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x484954) {
            ctx->pc = 0x48493Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48493c;
        }
    }
    ctx->pc = 0x48495Cu;
    // 0x48495c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x484960: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x484960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x484964: 0xc120a80  jal         func_482A00
    ctx->pc = 0x484964u;
    SET_GPR_U32(ctx, 31, 0x48496Cu);
    ctx->pc = 0x482A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A00u, 0x484964u, 0x48496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48496Cu;
label_48496c:
    // 0x48496c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48496cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484970: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x484970u;
    {
        const bool branch_taken_0x484970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484970) {
            ctx->pc = 0x4849B8u;
            goto label_4849b8;
        }
    }
    ctx->pc = 0x484978u;
label_484978:
    // 0x484978: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x484978u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48497c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48497Cu;
    {
        const bool branch_taken_0x48497c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48497c) {
            ctx->pc = 0x4849A0u;
            goto label_4849a0;
        }
    }
    ctx->pc = 0x484984u;
    // 0x484984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x484984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484988: 0xc12108c  jal         func_484230
    ctx->pc = 0x484988u;
    SET_GPR_U32(ctx, 31, 0x484990u);
    ctx->pc = 0x484230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484230u, 0x484988u, 0x484990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484990u;
label_484990:
    // 0x484990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x484990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484994: 0xc119c5c  jal         func_467170
    ctx->pc = 0x484994u;
    SET_GPR_U32(ctx, 31, 0x48499Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x484994u, 0x48499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48499Cu;
label_48499c:
    // 0x48499c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48499cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4849a0:
    // 0x4849a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4849a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4849a4: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x4849a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x4849a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4849a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4849ac: 0xc121060  jal         func_484180
    ctx->pc = 0x4849ACu;
    SET_GPR_U32(ctx, 31, 0x4849B4u);
    ctx->pc = 0x484180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484180u, 0x4849ACu, 0x4849B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4849B4u;
label_4849b4:
    // 0x4849b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4849b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4849b8:
    // 0x4849b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4849b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4849bc: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x4849bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x4849c0: 0xc120a78  jal         func_4829E0
    ctx->pc = 0x4849C0u;
    SET_GPR_U32(ctx, 31, 0x4849C8u);
    ctx->pc = 0x4829E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829E0u, 0x4849C0u, 0x4849C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4849C8u;
label_4849c8:
    // 0x4849c8: 0x1602ffeb  bne         $s0, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4849C8u;
    {
        const bool branch_taken_0x4849c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4849c8) {
            ctx->pc = 0x484978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484978;
        }
    }
    ctx->pc = 0x4849D0u;
    // 0x4849d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4849d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4849d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4849d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4849d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4849d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4849dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4849dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4849e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4849E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4849E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4849E8u;
    // 0x4849e8: 0x0  nop
    ctx->pc = 0x4849e8u;
    // NOP
    // 0x4849ec: 0x0  nop
    ctx->pc = 0x4849ecu;
    // NOP
    ctx->pc = 0x4849f0u;
}
