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

// Function: sub_001496A0
// Address: 0x1496a0 - 0x149770
void sub_001496A0_0x1496a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001496A0_0x1496a0");
#endif

    switch (ctx->pc) {
        case 0x1496a0u: goto label_1496a0;
        case 0x1496a4u: goto label_1496a4;
        case 0x1496a8u: goto label_1496a8;
        case 0x1496acu: goto label_1496ac;
        case 0x1496b0u: goto label_1496b0;
        case 0x1496b4u: goto label_1496b4;
        case 0x1496b8u: goto label_1496b8;
        case 0x1496bcu: goto label_1496bc;
        case 0x1496c0u: goto label_1496c0;
        case 0x1496c4u: goto label_1496c4;
        case 0x1496c8u: goto label_1496c8;
        case 0x1496ccu: goto label_1496cc;
        case 0x1496d0u: goto label_1496d0;
        case 0x1496d4u: goto label_1496d4;
        case 0x1496d8u: goto label_1496d8;
        case 0x1496dcu: goto label_1496dc;
        case 0x1496e0u: goto label_1496e0;
        case 0x1496e4u: goto label_1496e4;
        case 0x1496e8u: goto label_1496e8;
        case 0x1496ecu: goto label_1496ec;
        case 0x1496f0u: goto label_1496f0;
        case 0x1496f4u: goto label_1496f4;
        case 0x1496f8u: goto label_1496f8;
        case 0x1496fcu: goto label_1496fc;
        case 0x149700u: goto label_149700;
        case 0x149704u: goto label_149704;
        case 0x149708u: goto label_149708;
        case 0x14970cu: goto label_14970c;
        case 0x149710u: goto label_149710;
        case 0x149714u: goto label_149714;
        case 0x149718u: goto label_149718;
        case 0x14971cu: goto label_14971c;
        case 0x149720u: goto label_149720;
        case 0x149724u: goto label_149724;
        case 0x149728u: goto label_149728;
        case 0x14972cu: goto label_14972c;
        case 0x149730u: goto label_149730;
        case 0x149734u: goto label_149734;
        case 0x149738u: goto label_149738;
        case 0x14973cu: goto label_14973c;
        case 0x149740u: goto label_149740;
        case 0x149744u: goto label_149744;
        case 0x149748u: goto label_149748;
        case 0x14974cu: goto label_14974c;
        case 0x149750u: goto label_149750;
        case 0x149754u: goto label_149754;
        case 0x149758u: goto label_149758;
        case 0x14975cu: goto label_14975c;
        case 0x149760u: goto label_149760;
        case 0x149764u: goto label_149764;
        case 0x149768u: goto label_149768;
        case 0x14976cu: goto label_14976c;
        default: break;
    }

    ctx->pc = 0x1496a0u;

label_1496a0:
    // 0x1496a0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1496a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1496a4:
    // 0x1496a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1496a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1496a8:
    // 0x1496a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1496a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1496ac:
    // 0x1496ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1496acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1496b0:
    // 0x1496b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1496b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1496b4:
    // 0x1496b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1496b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1496b8:
    // 0x1496b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1496b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1496bc:
    // 0x1496bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1496bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1496c0:
    // 0x1496c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1496c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1496c4:
    // 0x1496c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1496c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1496c8:
    // 0x1496c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1496c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1496cc:
    // 0x1496cc: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x1496ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_1496d0:
    // 0x1496d0: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x1496d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_1496d4:
    // 0x1496d4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1496d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1496d8:
    // 0x1496d8: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x1496d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_1496dc:
    // 0x1496dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1496dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1496e0:
    // 0x1496e0: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x1496e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_1496e4:
    // 0x1496e4: 0x40f809  jalr        $v0
label_1496e8:
    if (ctx->pc == 0x1496E8u) {
        ctx->pc = 0x1496ECu;
        goto label_1496ec;
    }
    ctx->pc = 0x1496E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1496ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1496E4u, 0x1496ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1496ECu;
label_1496ec:
    // 0x1496ec: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x1496ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_1496f0:
    // 0x1496f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1496f4:
    if (ctx->pc == 0x1496F4u) {
        ctx->pc = 0x1496F8u;
        goto label_1496f8;
    }
    ctx->pc = 0x1496F0u;
    {
        const bool branch_taken_0x1496f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1496f0) {
            ctx->pc = 0x149710u;
            goto label_149710;
        }
    }
    ctx->pc = 0x1496F8u;
label_1496f8:
    // 0x1496f8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1496f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1496fc:
    // 0x1496fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1496fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149700:
    // 0x149700: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x149700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_149704:
    // 0x149704: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x149704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_149708:
    // 0x149708: 0x40f809  jalr        $v0
label_14970c:
    if (ctx->pc == 0x14970Cu) {
        ctx->pc = 0x149710u;
        goto label_149710;
    }
    ctx->pc = 0x149708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149710u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149708u, 0x149710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x149710u;
label_149710:
    // 0x149710: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x149710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_149714:
    // 0x149714: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x149714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_149718:
    // 0x149718: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x149718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_14971c:
    // 0x14971c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_149720:
    if (ctx->pc == 0x149720u) {
        ctx->pc = 0x149724u;
        goto label_149724;
    }
    ctx->pc = 0x14971Cu;
    {
        const bool branch_taken_0x14971c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14971c) {
            ctx->pc = 0x14973Cu;
            goto label_14973c;
        }
    }
    ctx->pc = 0x149724u;
label_149724:
    // 0x149724: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x149724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_149728:
    // 0x149728: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14972c:
    // 0x14972c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x14972cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_149730:
    // 0x149730: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x149730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_149734:
    // 0x149734: 0x40f809  jalr        $v0
label_149738:
    if (ctx->pc == 0x149738u) {
        ctx->pc = 0x14973Cu;
        goto label_14973c;
    }
    ctx->pc = 0x149734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14973Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149734u, 0x14973Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14973Cu;
label_14973c:
    // 0x14973c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_149740:
    // 0x149740: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x149740u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_149744:
    // 0x149744: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x149744u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_149748:
    // 0x149748: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x149748u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14974c:
    // 0x14974c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14974cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_149750:
    // 0x149750: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x149750u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_149754:
    // 0x149754: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149754u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_149758:
    // 0x149758: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14975c:
    // 0x14975c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14975cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_149760:
    // 0x149760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_149764:
    // 0x149764: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x149764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_149768:
    // 0x149768: 0x3e00008  jr          $ra
label_14976c:
    if (ctx->pc == 0x14976Cu) {
        ctx->pc = 0x149770u;
        goto label_fallthrough_0x149768;
    }
    ctx->pc = 0x149768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x149768:
    ctx->pc = 0x149770u;
}
