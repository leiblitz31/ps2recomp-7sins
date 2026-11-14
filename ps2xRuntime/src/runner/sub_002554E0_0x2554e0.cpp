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

// Function: sub_002554E0
// Address: 0x2554e0 - 0x255580
void sub_002554E0_0x2554e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002554E0_0x2554e0");
#endif

    switch (ctx->pc) {
        case 0x255508u: goto label_255508;
        case 0x25551cu: goto label_25551c;
        case 0x255530u: goto label_255530;
        case 0x255544u: goto label_255544;
        case 0x255560u: goto label_255560;
        default: break;
    }

    ctx->pc = 0x2554e0u;

    // 0x2554e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2554e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2554e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2554e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2554e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2554e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2554ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2554ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2554f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2554f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2554f4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2554f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2554f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2554f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2554fc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2554fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x255500: 0xc09538c  jal         func_254E30
    ctx->pc = 0x255500u;
    SET_GPR_U32(ctx, 31, 0x255508u);
    ctx->pc = 0x254E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E30u, 0x255500u, 0x255508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255508u;
label_255508:
    // 0x255508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x255508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25550c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255510: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x255510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x255514: 0xc095384  jal         func_254E10
    ctx->pc = 0x255514u;
    SET_GPR_U32(ctx, 31, 0x25551Cu);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x255514u, 0x25551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25551Cu;
label_25551c:
    // 0x25551c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25551cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x255520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255524: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x255524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x255528: 0xc095cc4  jal         func_257310
    ctx->pc = 0x255528u;
    SET_GPR_U32(ctx, 31, 0x255530u);
    ctx->pc = 0x257310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257310u, 0x255528u, 0x255530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255530u;
label_255530:
    // 0x255530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255534: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x255534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255538: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x255538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x25553c: 0xc095384  jal         func_254E10
    ctx->pc = 0x25553Cu;
    SET_GPR_U32(ctx, 31, 0x255544u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x25553Cu, 0x255544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255544u;
label_255544:
    // 0x255544: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255544u;
    {
        const bool branch_taken_0x255544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x255544) {
            ctx->pc = 0x255560u;
            goto label_255560;
        }
    }
    ctx->pc = 0x25554Cu;
    // 0x25554c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255550: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x255550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x255554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x255554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255558: 0xc095560  jal         func_255580
    ctx->pc = 0x255558u;
    SET_GPR_U32(ctx, 31, 0x255560u);
    ctx->pc = 0x255580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255580u, 0x255558u, 0x255560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255560u;
label_255560:
    // 0x255560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x255560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25556c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25556cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x255570: 0x3e00008  jr          $ra
    ctx->pc = 0x255570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255578u;
    // 0x255578: 0x0  nop
    ctx->pc = 0x255578u;
    // NOP
    // 0x25557c: 0x0  nop
    ctx->pc = 0x25557cu;
    // NOP
    ctx->pc = 0x255580u;
}
