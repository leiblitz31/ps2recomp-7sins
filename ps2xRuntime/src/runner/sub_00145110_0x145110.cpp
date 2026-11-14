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

// Function: sub_00145110
// Address: 0x145110 - 0x145180
void sub_00145110_0x145110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145110_0x145110");
#endif

    switch (ctx->pc) {
        case 0x14514cu: goto label_14514c;
        case 0x14516cu: goto label_14516c;
        default: break;
    }

    ctx->pc = 0x145110u;

    // 0x145110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x145118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14511c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14511cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x145120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x145120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145124: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x145124u;
    {
        const bool branch_taken_0x145124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145124) {
            ctx->pc = 0x14516Cu;
            goto label_14516c;
        }
    }
    ctx->pc = 0x14512Cu;
    // 0x14512c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x14512cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x145130: 0x24633890  addiu       $v1, $v1, 0x3890
    ctx->pc = 0x145130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14480));
    // 0x145134: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x145134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145138: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x145138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x14513c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14513cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145144: 0xc051460  jal         func_145180
    ctx->pc = 0x145144u;
    SET_GPR_U32(ctx, 31, 0x14514Cu);
    ctx->pc = 0x145180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145180u, 0x145144u, 0x14514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14514Cu;
label_14514c:
    // 0x14514c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x14514cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145150: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x145150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x145154: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x145154u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x145158: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145158u;
    {
        const bool branch_taken_0x145158 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x145158) {
            ctx->pc = 0x14516Cu;
            goto label_14516c;
        }
    }
    ctx->pc = 0x145160u;
    // 0x145160: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x145160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145164: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x145164u;
    SET_GPR_U32(ctx, 31, 0x14516Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x145164u, 0x14516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14516Cu;
label_14516c:
    // 0x14516c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14516cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145174: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x145174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x145178: 0x3e00008  jr          $ra
    ctx->pc = 0x145178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145180u;
}
