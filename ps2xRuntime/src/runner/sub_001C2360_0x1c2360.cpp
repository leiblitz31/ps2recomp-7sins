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

// Function: sub_001C2360
// Address: 0x1c2360 - 0x1c23f0
void sub_001C2360_0x1c2360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2360_0x1c2360");
#endif

    switch (ctx->pc) {
        case 0x1c239cu: goto label_1c239c;
        case 0x1c23dcu: goto label_1c23dc;
        default: break;
    }

    ctx->pc = 0x1c2360u;

    // 0x1c2360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c2364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2368: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c2368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c236c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c236cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c2370: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c2370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2374: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c2374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c2378: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c2378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c237c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2380: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2380u;
    {
        const bool branch_taken_0x1c2380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2380) {
            ctx->pc = 0x1C23B4u;
            goto label_1c23b4;
        }
    }
    ctx->pc = 0x1C2388u;
    // 0x1c2388: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c2388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c238c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1c238cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c2390: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c2390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2394: 0xc070990  jal         func_1C2640
    ctx->pc = 0x1C2394u;
    SET_GPR_U32(ctx, 31, 0x1C239Cu);
    ctx->pc = 0x1C2640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2640u, 0x1C2394u, 0x1C239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C239Cu;
label_1c239c:
    // 0x1c239c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c239cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c23a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c23a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1c23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1c23a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1c23a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1c23ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C23ACu;
    {
        const bool branch_taken_0x1c23ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23ac) {
            ctx->pc = 0x1C23DCu;
            goto label_1c23dc;
        }
    }
    ctx->pc = 0x1C23B4u;
label_1c23b4:
    // 0x1c23b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c23b8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1c23b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c23bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c23bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c23c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c23c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c23c4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1c23c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c23c8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1c23c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c23cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c23ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c23d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c23d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c23d4: 0xc0708fc  jal         func_1C23F0
    ctx->pc = 0x1C23D4u;
    SET_GPR_U32(ctx, 31, 0x1C23DCu);
    ctx->pc = 0x1C23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C23F0u, 0x1C23D4u, 0x1C23DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23DCu;
label_1c23dc:
    // 0x1c23dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c23dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c23e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c23e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C23E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C23E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C23ECu;
    // 0x1c23ec: 0x0  nop
    ctx->pc = 0x1c23ecu;
    // NOP
    ctx->pc = 0x1c23f0u;
}
