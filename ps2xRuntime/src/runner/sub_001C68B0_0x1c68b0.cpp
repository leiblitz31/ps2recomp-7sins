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

// Function: sub_001C68B0
// Address: 0x1c68b0 - 0x1c6940
void sub_001C68B0_0x1c68b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C68B0_0x1c68b0");
#endif

    switch (ctx->pc) {
        case 0x1c68ecu: goto label_1c68ec;
        case 0x1c692cu: goto label_1c692c;
        default: break;
    }

    ctx->pc = 0x1c68b0u;

    // 0x1c68b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c68b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c68b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c68b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c68b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c68b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c68bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c68bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c68c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c68c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c68c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c68cc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c68d0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C68D0u;
    {
        const bool branch_taken_0x1c68d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c68d0) {
            ctx->pc = 0x1C6904u;
            goto label_1c6904;
        }
    }
    ctx->pc = 0x1C68D8u;
    // 0x1c68d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c68dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1c68dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c68e0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c68e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c68e4: 0xc071b68  jal         func_1C6DA0
    ctx->pc = 0x1C68E4u;
    SET_GPR_U32(ctx, 31, 0x1C68ECu);
    ctx->pc = 0x1C6DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6DA0u, 0x1C68E4u, 0x1C68ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68ECu;
label_1c68ec:
    // 0x1c68ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c68ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c68f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c68f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c68f8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1c68f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1c68fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C68FCu;
    {
        const bool branch_taken_0x1c68fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c68fc) {
            ctx->pc = 0x1C692Cu;
            goto label_1c692c;
        }
    }
    ctx->pc = 0x1C6904u;
label_1c6904:
    // 0x1c6904: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c6904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6908: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1c6908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c690c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c690cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6910: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c6910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c6914: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1c6914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6918: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1c6918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c691c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c691cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6920: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6924: 0xc071a50  jal         func_1C6940
    ctx->pc = 0x1C6924u;
    SET_GPR_U32(ctx, 31, 0x1C692Cu);
    ctx->pc = 0x1C6940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6940u, 0x1C6924u, 0x1C692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C692Cu;
label_1c692c:
    // 0x1c692c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c692cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6930: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c6930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c6934: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C693Cu;
    // 0x1c693c: 0x0  nop
    ctx->pc = 0x1c693cu;
    // NOP
    ctx->pc = 0x1c6940u;
}
