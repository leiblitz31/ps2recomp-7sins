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

// Function: sub_0029A8F0
// Address: 0x29a8f0 - 0x29a980
void sub_0029A8F0_0x29a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A8F0_0x29a8f0");
#endif

    switch (ctx->pc) {
        case 0x29a92cu: goto label_29a92c;
        case 0x29a96cu: goto label_29a96c;
        default: break;
    }

    ctx->pc = 0x29a8f0u;

    // 0x29a8f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a8f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29a8fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x29a900: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a904: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a908: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a90c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x29a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29a910: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29A910u;
    {
        const bool branch_taken_0x29a910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29a910) {
            ctx->pc = 0x29A944u;
            goto label_29a944;
        }
    }
    ctx->pc = 0x29A918u;
    // 0x29a918: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a91c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a920: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29a920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a924: 0xc0a6af4  jal         func_29ABD0
    ctx->pc = 0x29A924u;
    SET_GPR_U32(ctx, 31, 0x29A92Cu);
    ctx->pc = 0x29ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ABD0u, 0x29A924u, 0x29A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A92Cu;
label_29a92c:
    // 0x29a92c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a930: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29a930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a934: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x29a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x29a938: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29a938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29a93c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29A93Cu;
    {
        const bool branch_taken_0x29a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a93c) {
            ctx->pc = 0x29A96Cu;
            goto label_29a96c;
        }
    }
    ctx->pc = 0x29A944u;
label_29a944:
    // 0x29a944: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a948: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x29a948u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a94c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a950: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x29a950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a954: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x29a954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a958: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x29a958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x29a95c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29a95cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a960: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x29a960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a964: 0xc0a6a60  jal         func_29A980
    ctx->pc = 0x29A964u;
    SET_GPR_U32(ctx, 31, 0x29A96Cu);
    ctx->pc = 0x29A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A980u, 0x29A964u, 0x29A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A96Cu;
label_29a96c:
    // 0x29a96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a970: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29a970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29a974: 0x3e00008  jr          $ra
    ctx->pc = 0x29A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A97Cu;
    // 0x29a97c: 0x0  nop
    ctx->pc = 0x29a97cu;
    // NOP
    ctx->pc = 0x29a980u;
}
