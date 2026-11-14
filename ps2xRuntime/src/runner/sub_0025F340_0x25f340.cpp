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

// Function: sub_0025F340
// Address: 0x25f340 - 0x25f3c0
void sub_0025F340_0x25f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F340_0x25f340");
#endif

    switch (ctx->pc) {
        case 0x25f374u: goto label_25f374;
        case 0x25f384u: goto label_25f384;
        case 0x25f3a4u: goto label_25f3a4;
        default: break;
    }

    ctx->pc = 0x25f340u;

    // 0x25f340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f348: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25f348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25f34c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25f34cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x25f350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f354: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25F354u;
    {
        const bool branch_taken_0x25f354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f354) {
            ctx->pc = 0x25F3A4u;
            goto label_25f3a4;
        }
    }
    ctx->pc = 0x25F35Cu;
    // 0x25f35c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f360: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f364: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f368: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25f368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25f36c: 0xc097d1c  jal         func_25F470
    ctx->pc = 0x25F36Cu;
    SET_GPR_U32(ctx, 31, 0x25F374u);
    ctx->pc = 0x25F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F470u, 0x25F36Cu, 0x25F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F374u;
label_25f374:
    // 0x25f374: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f37c: 0xc097cf0  jal         func_25F3C0
    ctx->pc = 0x25F37Cu;
    SET_GPR_U32(ctx, 31, 0x25F384u);
    ctx->pc = 0x25F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F3C0u, 0x25F37Cu, 0x25F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F384u;
label_25f384:
    // 0x25f384: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25f384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f388: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25f388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25f38c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25f38cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25f390: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F390u;
    {
        const bool branch_taken_0x25f390 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f390) {
            ctx->pc = 0x25F3A4u;
            goto label_25f3a4;
        }
    }
    ctx->pc = 0x25F398u;
    // 0x25f398: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f39c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25F39Cu;
    SET_GPR_U32(ctx, 31, 0x25F3A4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25F39Cu, 0x25F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3A4u;
label_25f3a4:
    // 0x25f3a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f3ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25f3acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25f3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25F3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F3B8u;
    // 0x25f3b8: 0x0  nop
    ctx->pc = 0x25f3b8u;
    // NOP
    // 0x25f3bc: 0x0  nop
    ctx->pc = 0x25f3bcu;
    // NOP
    ctx->pc = 0x25f3c0u;
}
