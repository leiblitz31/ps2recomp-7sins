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

// Function: sub_002BD110
// Address: 0x2bd110 - 0x2bd1b0
void sub_002BD110_0x2bd110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD110_0x2bd110");
#endif

    switch (ctx->pc) {
        case 0x2bd14cu: goto label_2bd14c;
        case 0x2bd15cu: goto label_2bd15c;
        case 0x2bd16cu: goto label_2bd16c;
        case 0x2bd184u: goto label_2bd184;
        case 0x2bd198u: goto label_2bd198;
        default: break;
    }

    ctx->pc = 0x2bd110u;

    // 0x2bd110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bd110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bd114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bd114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bd118: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2bd118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2bd11c: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x2bd11cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bd120: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2bd120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd124: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2bd124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bd128: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2bd128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd12c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2bd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bd130: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BD130u;
    {
        const bool branch_taken_0x2bd130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bd130) {
            ctx->pc = 0x2BD174u;
            goto label_2bd174;
        }
    }
    ctx->pc = 0x2BD138u;
    // 0x2bd138: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2bd138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd13c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2bd13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2bd140: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x2bd140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2bd144: 0xc078858  jal         func_1E2160
    ctx->pc = 0x2BD144u;
    SET_GPR_U32(ctx, 31, 0x2BD14Cu);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x2BD144u, 0x2BD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD14Cu;
label_2bd14c:
    // 0x2bd14c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2bd14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2bd150: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x2bd150u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd154: 0xc078820  jal         func_1E2080
    ctx->pc = 0x2BD154u;
    SET_GPR_U32(ctx, 31, 0x2BD15Cu);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x2BD154u, 0x2BD15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD15Cu;
label_2bd15c:
    // 0x2bd15c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2bd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd160: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2bd160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2bd164: 0xc078a30  jal         func_1E28C0
    ctx->pc = 0x2BD164u;
    SET_GPR_U32(ctx, 31, 0x2BD16Cu);
    ctx->pc = 0x1E28C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28C0u, 0x2BD164u, 0x2BD16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD16Cu;
label_2bd16c:
    // 0x2bd16c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BD16Cu;
    {
        const bool branch_taken_0x2bd16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd16c) {
            ctx->pc = 0x2BD198u;
            goto label_2bd198;
        }
    }
    ctx->pc = 0x2BD174u;
label_2bd174:
    // 0x2bd174: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bd174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bd178: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bd178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd17c: 0xc078c10  jal         func_1E3040
    ctx->pc = 0x2BD17Cu;
    SET_GPR_U32(ctx, 31, 0x2BD184u);
    ctx->pc = 0x1E3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3040u, 0x2BD17Cu, 0x2BD184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD184u;
label_2bd184:
    // 0x2bd184: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2bd184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd188: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2bd188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bd18c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x2bd18cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd190: 0xc0af46c  jal         func_2BD1B0
    ctx->pc = 0x2BD190u;
    SET_GPR_U32(ctx, 31, 0x2BD198u);
    ctx->pc = 0x2BD1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD1B0u, 0x2BD190u, 0x2BD198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD198u;
label_2bd198:
    // 0x2bd198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bd198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd19c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2bd19cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bd1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD1A8u;
    // 0x2bd1a8: 0x0  nop
    ctx->pc = 0x2bd1a8u;
    // NOP
    // 0x2bd1ac: 0x0  nop
    ctx->pc = 0x2bd1acu;
    // NOP
    ctx->pc = 0x2bd1b0u;
}
