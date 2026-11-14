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

// Function: sub_00460360
// Address: 0x460360 - 0x4603f0
void sub_00460360_0x460360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460360_0x460360");
#endif

    switch (ctx->pc) {
        case 0x460374u: goto label_460374;
        default: break;
    }

    ctx->pc = 0x460360u;

    // 0x460360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x460360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x460364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x460364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x460368: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x460368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46036c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x46036Cu;
    {
        const bool branch_taken_0x46036c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46036c) {
            ctx->pc = 0x4603D4u;
            goto label_4603d4;
        }
    }
    ctx->pc = 0x460374u;
label_460374:
    // 0x460374: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x460374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x460378: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x460378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x46037c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x460380: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x460380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x460384: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x460384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x460388: 0x24634d20  addiu       $v1, $v1, 0x4D20
    ctx->pc = 0x460388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19744));
    // 0x46038c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x460390: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x460390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x460394: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x460394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x460398: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x460398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x46039c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4603a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4603a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4603a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4603a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4603a8: 0x24634d20  addiu       $v1, $v1, 0x4D20
    ctx->pc = 0x4603a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19744));
    // 0x4603ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4603acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4603b0: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4603b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x4603b4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x4603b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4603b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4603b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4603bc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4603bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4603c0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4603c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4603c4: 0x24634d20  addiu       $v1, $v1, 0x4D20
    ctx->pc = 0x4603c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19744));
    // 0x4603c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4603c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4603cc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x4603ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x4603d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4603d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4603d4:
    // 0x4603d4: 0x2a03000f  slti        $v1, $s0, 0xF
    ctx->pc = 0x4603d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x4603d8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x4603D8u;
    {
        const bool branch_taken_0x4603d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4603d8) {
            ctx->pc = 0x460374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460374;
        }
    }
    ctx->pc = 0x4603E0u;
    // 0x4603e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4603e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4603e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4603e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4603e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4603E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4603E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4603F0u;
}
