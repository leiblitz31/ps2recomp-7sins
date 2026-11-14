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

// Function: sub_001084A0
// Address: 0x1084a0 - 0x108530
void sub_001084A0_0x1084a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001084A0_0x1084a0");
#endif

    switch (ctx->pc) {
        case 0x1084dcu: goto label_1084dc;
        case 0x10851cu: goto label_10851c;
        default: break;
    }

    ctx->pc = 0x1084a0u;

    // 0x1084a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1084a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1084a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1084a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1084a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1084a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1084ac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1084acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1084b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1084b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1084b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1084b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1084b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1084b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1084bc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1084bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1084c0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1084C0u;
    {
        const bool branch_taken_0x1084c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1084c0) {
            ctx->pc = 0x1084F4u;
            goto label_1084f4;
        }
    }
    ctx->pc = 0x1084C8u;
    // 0x1084c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1084c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1084cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1084ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1084d0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1084d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1084d4: 0xc0421e0  jal         func_108780
    ctx->pc = 0x1084D4u;
    SET_GPR_U32(ctx, 31, 0x1084DCu);
    ctx->pc = 0x108780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108780u, 0x1084D4u, 0x1084DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084DCu;
label_1084dc:
    // 0x1084dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1084dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1084e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1084e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1084e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1084e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1084e8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1084e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1084ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1084ECu;
    {
        const bool branch_taken_0x1084ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1084ec) {
            ctx->pc = 0x10851Cu;
            goto label_10851c;
        }
    }
    ctx->pc = 0x1084F4u;
label_1084f4:
    // 0x1084f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1084f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1084f8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1084f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1084fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1084fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108500: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x108504: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x108504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108508: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x108508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10850c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10850cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108510: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x108510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108514: 0xc04214c  jal         func_108530
    ctx->pc = 0x108514u;
    SET_GPR_U32(ctx, 31, 0x10851Cu);
    ctx->pc = 0x108530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108530u, 0x108514u, 0x10851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10851Cu;
label_10851c:
    // 0x10851c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10851cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108520: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x108520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x108524: 0x3e00008  jr          $ra
    ctx->pc = 0x108524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10852Cu;
    // 0x10852c: 0x0  nop
    ctx->pc = 0x10852cu;
    // NOP
    ctx->pc = 0x108530u;
}
