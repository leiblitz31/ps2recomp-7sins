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

// Function: sub_002D1520
// Address: 0x2d1520 - 0x2d15b0
void sub_002D1520_0x2d1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1520_0x2d1520");
#endif

    switch (ctx->pc) {
        case 0x2d155cu: goto label_2d155c;
        case 0x2d159cu: goto label_2d159c;
        default: break;
    }

    ctx->pc = 0x2d1520u;

    // 0x2d1520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1528: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d1528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d152c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d152cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d1530: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d1530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1534: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d1534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d1538: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d1538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d153c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d1540: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D1540u;
    {
        const bool branch_taken_0x2d1540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d1540) {
            ctx->pc = 0x2D1574u;
            goto label_2d1574;
        }
    }
    ctx->pc = 0x2D1548u;
    // 0x2d1548: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d154c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d154cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d1550: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d1550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1554: 0xc0b4600  jal         func_2D1800
    ctx->pc = 0x2D1554u;
    SET_GPR_U32(ctx, 31, 0x2D155Cu);
    ctx->pc = 0x2D1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1800u, 0x2D1554u, 0x2D155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D155Cu;
label_2d155c:
    // 0x2d155c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d155cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1560: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d1560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d1564: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d1564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d1568: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2d1568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2d156c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D156Cu;
    {
        const bool branch_taken_0x2d156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d156c) {
            ctx->pc = 0x2D159Cu;
            goto label_2d159c;
        }
    }
    ctx->pc = 0x2D1574u;
label_2d1574:
    // 0x2d1574: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d1574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1578: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2d1578u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d157c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1580: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d1580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d1584: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2d1584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1588: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2d1588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d158c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d158cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1590: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d1590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1594: 0xc0b456c  jal         func_2D15B0
    ctx->pc = 0x2D1594u;
    SET_GPR_U32(ctx, 31, 0x2D159Cu);
    ctx->pc = 0x2D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D15B0u, 0x2D1594u, 0x2D159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D159Cu;
label_2d159c:
    // 0x2d159c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d15a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d15a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d15a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D15A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D15A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D15ACu;
    // 0x2d15ac: 0x0  nop
    ctx->pc = 0x2d15acu;
    // NOP
    ctx->pc = 0x2d15b0u;
}
