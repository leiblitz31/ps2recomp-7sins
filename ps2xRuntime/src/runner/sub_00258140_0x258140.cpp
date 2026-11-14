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

// Function: sub_00258140
// Address: 0x258140 - 0x2581c0
void sub_00258140_0x258140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258140_0x258140");
#endif

    switch (ctx->pc) {
        case 0x258174u: goto label_258174;
        case 0x258184u: goto label_258184;
        case 0x2581a4u: goto label_2581a4;
        default: break;
    }

    ctx->pc = 0x258140u;

    // 0x258140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25814c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25814cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x258150: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258154: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x258154u;
    {
        const bool branch_taken_0x258154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258154) {
            ctx->pc = 0x2581A4u;
            goto label_2581a4;
        }
    }
    ctx->pc = 0x25815Cu;
    // 0x25815c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25815cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258160: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258164: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x258164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258168: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x258168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25816c: 0xc09609c  jal         func_258270
    ctx->pc = 0x25816Cu;
    SET_GPR_U32(ctx, 31, 0x258174u);
    ctx->pc = 0x258270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258270u, 0x25816Cu, 0x258174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258174u;
label_258174:
    // 0x258174: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25817c: 0xc096070  jal         func_2581C0
    ctx->pc = 0x25817Cu;
    SET_GPR_U32(ctx, 31, 0x258184u);
    ctx->pc = 0x2581C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2581C0u, 0x25817Cu, 0x258184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258184u;
label_258184:
    // 0x258184: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x258184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258188: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x258188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25818c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25818cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x258190: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258190u;
    {
        const bool branch_taken_0x258190 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x258190) {
            ctx->pc = 0x2581A4u;
            goto label_2581a4;
        }
    }
    ctx->pc = 0x258198u;
    // 0x258198: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25819c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25819Cu;
    SET_GPR_U32(ctx, 31, 0x2581A4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25819Cu, 0x2581A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2581A4u;
label_2581a4:
    // 0x2581a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2581a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2581a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2581a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2581ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2581acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2581b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2581B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2581B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2581B8u;
    // 0x2581b8: 0x0  nop
    ctx->pc = 0x2581b8u;
    // NOP
    // 0x2581bc: 0x0  nop
    ctx->pc = 0x2581bcu;
    // NOP
    ctx->pc = 0x2581c0u;
}
