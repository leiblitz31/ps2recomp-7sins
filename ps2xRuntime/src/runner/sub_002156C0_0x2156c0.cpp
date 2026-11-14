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

// Function: sub_002156C0
// Address: 0x2156c0 - 0x2157d0
void sub_002156C0_0x2156c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002156C0_0x2156c0");
#endif

    switch (ctx->pc) {
        case 0x2156f4u: goto label_2156f4;
        case 0x215708u: goto label_215708;
        case 0x21572cu: goto label_21572c;
        case 0x215748u: goto label_215748;
        case 0x215760u: goto label_215760;
        case 0x215788u: goto label_215788;
        case 0x215798u: goto label_215798;
        case 0x2157b4u: goto label_2157b4;
        default: break;
    }

    ctx->pc = 0x2156c0u;

    // 0x2156c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2156c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2156c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2156c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2156c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2156c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2156cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2156ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2156d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2156d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2156d4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2156d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2156d8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2156d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2156dc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2156dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2156e0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2156e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2156e4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2156e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2156e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2156e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2156ec: 0xc085644  jal         func_215910
    ctx->pc = 0x2156ECu;
    SET_GPR_U32(ctx, 31, 0x2156F4u);
    ctx->pc = 0x215910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215910u, 0x2156ECu, 0x2156F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156F4u;
label_2156f4:
    // 0x2156f4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2156f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2156f8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2156f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2156fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2156fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x215700: 0xc041954  jal         func_106550
    ctx->pc = 0x215700u;
    SET_GPR_U32(ctx, 31, 0x215708u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x215700u, 0x215708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215708u;
label_215708:
    // 0x215708: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x21570c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215710: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x215710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215714: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x215714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x215718: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x215718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x21571c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21571cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x215720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215724: 0xc0856dc  jal         func_215B70
    ctx->pc = 0x215724u;
    SET_GPR_U32(ctx, 31, 0x21572Cu);
    ctx->pc = 0x215B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B70u, 0x215724u, 0x21572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21572Cu;
label_21572c:
    // 0x21572c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21572cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215730: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x215730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x215734: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x215734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215738: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x215738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21573c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21573cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215740: 0xc041934  jal         func_1064D0
    ctx->pc = 0x215740u;
    SET_GPR_U32(ctx, 31, 0x215748u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x215740u, 0x215748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215748u;
label_215748:
    // 0x215748: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21574c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21574cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215750: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x215750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x215754: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x215754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x215758: 0xc085628  jal         func_2158A0
    ctx->pc = 0x215758u;
    SET_GPR_U32(ctx, 31, 0x215760u);
    ctx->pc = 0x2158A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2158A0u, 0x215758u, 0x215760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215760u;
label_215760:
    // 0x215760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215764: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x215764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x215768: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x215768u;
    {
        const bool branch_taken_0x215768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215768) {
            ctx->pc = 0x21578Cu;
            goto label_21578c;
        }
    }
    ctx->pc = 0x215770u;
    // 0x215770: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x215770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x215774: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x215774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x215778: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x215778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21577c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21577cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215780: 0xc041934  jal         func_1064D0
    ctx->pc = 0x215780u;
    SET_GPR_U32(ctx, 31, 0x215788u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x215780u, 0x215788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215788u;
label_215788:
    // 0x215788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21578c:
    // 0x21578c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x21578cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x215790: 0xc085608  jal         func_215820
    ctx->pc = 0x215790u;
    SET_GPR_U32(ctx, 31, 0x215798u);
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x215790u, 0x215798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215798u;
label_215798:
    // 0x215798: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x215798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x21579c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x21579cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2157a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2157a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2157a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2157a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2157a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157ac: 0xc0855f4  jal         func_2157D0
    ctx->pc = 0x2157ACu;
    SET_GPR_U32(ctx, 31, 0x2157B4u);
    ctx->pc = 0x2157D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2157D0u, 0x2157ACu, 0x2157B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157B4u;
label_2157b4:
    // 0x2157b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2157b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2157b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2157b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2157bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2157bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2157c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2157c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2157c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2157c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2157c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2157C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2157C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2157D0u;
}
