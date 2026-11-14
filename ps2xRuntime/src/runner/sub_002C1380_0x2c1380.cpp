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

// Function: sub_002C1380
// Address: 0x2c1380 - 0x2c1410
void sub_002C1380_0x2c1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1380_0x2c1380");
#endif

    switch (ctx->pc) {
        case 0x2c13bcu: goto label_2c13bc;
        case 0x2c13fcu: goto label_2c13fc;
        default: break;
    }

    ctx->pc = 0x2c1380u;

    // 0x2c1380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c1384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1388: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2c1388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2c138c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2c138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2c1390: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c1390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1394: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c1394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c1398: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c1398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c139c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c13a0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C13A0u;
    {
        const bool branch_taken_0x2c13a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c13a0) {
            ctx->pc = 0x2C13D4u;
            goto label_2c13d4;
        }
    }
    ctx->pc = 0x2C13A8u;
    // 0x2c13a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c13ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c13acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c13b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2c13b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c13b4: 0xc0b0598  jal         func_2C1660
    ctx->pc = 0x2C13B4u;
    SET_GPR_U32(ctx, 31, 0x2C13BCu);
    ctx->pc = 0x2C1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1660u, 0x2C13B4u, 0x2C13BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C13BCu;
label_2c13bc:
    // 0x2c13bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c13c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c13c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2c13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c13c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2c13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2c13cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C13CCu;
    {
        const bool branch_taken_0x2c13cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c13cc) {
            ctx->pc = 0x2C13FCu;
            goto label_2c13fc;
        }
    }
    ctx->pc = 0x2C13D4u;
label_2c13d4:
    // 0x2c13d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c13d8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2c13d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c13dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c13dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c13e0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c13e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c13e4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2c13e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c13e8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2c13e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2c13ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c13ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c13f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c13f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c13f4: 0xc0b0504  jal         func_2C1410
    ctx->pc = 0x2C13F4u;
    SET_GPR_U32(ctx, 31, 0x2C13FCu);
    ctx->pc = 0x2C1410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1410u, 0x2C13F4u, 0x2C13FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C13FCu;
label_2c13fc:
    // 0x2c13fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c13fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1400: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c1400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c1404: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C140Cu;
    // 0x2c140c: 0x0  nop
    ctx->pc = 0x2c140cu;
    // NOP
    ctx->pc = 0x2c1410u;
}
