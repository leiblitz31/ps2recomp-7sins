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

// Function: sub_00273930
// Address: 0x273930 - 0x2739f0
void sub_00273930_0x273930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273930_0x273930");
#endif

    switch (ctx->pc) {
        case 0x273930u: goto label_273930;
        case 0x273934u: goto label_273934;
        case 0x273938u: goto label_273938;
        case 0x27393cu: goto label_27393c;
        case 0x273940u: goto label_273940;
        case 0x273944u: goto label_273944;
        case 0x273948u: goto label_273948;
        case 0x27394cu: goto label_27394c;
        case 0x273950u: goto label_273950;
        case 0x273954u: goto label_273954;
        case 0x273958u: goto label_273958;
        case 0x27395cu: goto label_27395c;
        case 0x273960u: goto label_273960;
        case 0x273964u: goto label_273964;
        case 0x273968u: goto label_273968;
        case 0x27396cu: goto label_27396c;
        case 0x273970u: goto label_273970;
        case 0x273974u: goto label_273974;
        case 0x273978u: goto label_273978;
        case 0x27397cu: goto label_27397c;
        case 0x273980u: goto label_273980;
        case 0x273984u: goto label_273984;
        case 0x273988u: goto label_273988;
        case 0x27398cu: goto label_27398c;
        case 0x273990u: goto label_273990;
        case 0x273994u: goto label_273994;
        case 0x273998u: goto label_273998;
        case 0x27399cu: goto label_27399c;
        case 0x2739a0u: goto label_2739a0;
        case 0x2739a4u: goto label_2739a4;
        case 0x2739a8u: goto label_2739a8;
        case 0x2739acu: goto label_2739ac;
        case 0x2739b0u: goto label_2739b0;
        case 0x2739b4u: goto label_2739b4;
        case 0x2739b8u: goto label_2739b8;
        case 0x2739bcu: goto label_2739bc;
        case 0x2739c0u: goto label_2739c0;
        case 0x2739c4u: goto label_2739c4;
        case 0x2739c8u: goto label_2739c8;
        case 0x2739ccu: goto label_2739cc;
        case 0x2739d0u: goto label_2739d0;
        case 0x2739d4u: goto label_2739d4;
        case 0x2739d8u: goto label_2739d8;
        case 0x2739dcu: goto label_2739dc;
        case 0x2739e0u: goto label_2739e0;
        case 0x2739e4u: goto label_2739e4;
        case 0x2739e8u: goto label_2739e8;
        case 0x2739ecu: goto label_2739ec;
        default: break;
    }

    ctx->pc = 0x273930u;

label_273930:
    // 0x273930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_273934:
    // 0x273934: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x273934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_273938:
    // 0x273938: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x273938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27393c:
    // 0x27393c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x27393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_273940:
    // 0x273940: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x273940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_273944:
    // 0x273944: 0x3e00008  jr          $ra
label_273948:
    if (ctx->pc == 0x273948u) {
        ctx->pc = 0x27394Cu;
        goto label_27394c;
    }
    ctx->pc = 0x273944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27394Cu;
label_27394c:
    // 0x27394c: 0x0  nop
    ctx->pc = 0x27394cu;
    // NOP
label_273950:
    // 0x273950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x273950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_273954:
    // 0x273954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_273958:
    // 0x273958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27395c:
    // 0x27395c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x27395cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_273960:
    // 0x273960: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x273960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_273964:
    // 0x273964: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x273964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_273968:
    // 0x273968: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x273968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27396c:
    // 0x27396c: 0xc08904c  jal         func_224130
label_273970:
    if (ctx->pc == 0x273970u) {
        ctx->pc = 0x273974u;
        goto label_273974;
    }
    ctx->pc = 0x27396Cu;
    SET_GPR_U32(ctx, 31, 0x273974u);
    ctx->pc = 0x224130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224130u, 0x27396Cu, 0x273974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273974u;
label_273974:
    // 0x273974: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x273974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_273978:
    // 0x273978: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x273978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27397c:
    // 0x27397c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27397cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273980:
    // 0x273980: 0xc08ec98  jal         func_23B260
label_273984:
    if (ctx->pc == 0x273984u) {
        ctx->pc = 0x273988u;
        goto label_273988;
    }
    ctx->pc = 0x273980u;
    SET_GPR_U32(ctx, 31, 0x273988u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x273980u, 0x273988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273988u;
label_273988:
    // 0x273988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27398c:
    // 0x27398c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x27398cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_273990:
    // 0x273990: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x273990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_273994:
    // 0x273994: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x273994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_273998:
    // 0x273998: 0xc0422a8  jal         func_108AA0
label_27399c:
    if (ctx->pc == 0x27399Cu) {
        ctx->pc = 0x2739A0u;
        goto label_2739a0;
    }
    ctx->pc = 0x273998u;
    SET_GPR_U32(ctx, 31, 0x2739A0u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x273998u, 0x2739A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739A0u;
label_2739a0:
    // 0x2739a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2739a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2739a4:
    // 0x2739a4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2739a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2739a8:
    // 0x2739a8: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x2739a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2739ac:
    // 0x2739ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2739acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2739b0:
    // 0x2739b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2739b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2739b4:
    // 0x2739b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2739b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2739b8:
    // 0x2739b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2739b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2739bc:
    // 0x2739bc: 0x320f809  jalr        $t9
label_2739c0:
    if (ctx->pc == 0x2739C0u) {
        ctx->pc = 0x2739C4u;
        goto label_2739c4;
    }
    ctx->pc = 0x2739BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2739C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2739BCu, 0x2739C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2739C4u;
label_2739c4:
    // 0x2739c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2739c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2739c8:
    // 0x2739c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2739c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2739cc:
    // 0x2739cc: 0xc08ec98  jal         func_23B260
label_2739d0:
    if (ctx->pc == 0x2739D0u) {
        ctx->pc = 0x2739D4u;
        goto label_2739d4;
    }
    ctx->pc = 0x2739CCu;
    SET_GPR_U32(ctx, 31, 0x2739D4u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x2739CCu, 0x2739D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739D4u;
label_2739d4:
    // 0x2739d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2739d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2739d8:
    // 0x2739d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2739d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2739dc:
    // 0x2739dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2739dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2739e0:
    // 0x2739e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2739e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2739e4:
    // 0x2739e4: 0x3e00008  jr          $ra
label_2739e8:
    if (ctx->pc == 0x2739E8u) {
        ctx->pc = 0x2739ECu;
        goto label_2739ec;
    }
    ctx->pc = 0x2739E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2739E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2739ECu;
label_2739ec:
    // 0x2739ec: 0x0  nop
    ctx->pc = 0x2739ecu;
    // NOP
    ctx->pc = 0x2739f0u;
}
