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

// Function: sub_0047B570
// Address: 0x47b570 - 0x47b680
void sub_0047B570_0x47b570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B570_0x47b570");
#endif

    switch (ctx->pc) {
        case 0x47b5a4u: goto label_47b5a4;
        case 0x47b5b8u: goto label_47b5b8;
        case 0x47b5dcu: goto label_47b5dc;
        case 0x47b5f8u: goto label_47b5f8;
        case 0x47b610u: goto label_47b610;
        case 0x47b638u: goto label_47b638;
        case 0x47b648u: goto label_47b648;
        case 0x47b664u: goto label_47b664;
        default: break;
    }

    ctx->pc = 0x47b570u;

    // 0x47b570: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x47b570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x47b574: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x47b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x47b578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47b578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47b57c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47b57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47b580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47b580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47b584: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x47b584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x47b588: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x47b588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x47b58c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x47b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x47b590: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x47b590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x47b594: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x47b594u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x47b598: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x47b598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47b59c: 0xc11eb8c  jal         func_47AE30
    ctx->pc = 0x47B59Cu;
    SET_GPR_U32(ctx, 31, 0x47B5A4u);
    ctx->pc = 0x47AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AE30u, 0x47B59Cu, 0x47B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B5A4u;
label_47b5a4:
    // 0x47b5a4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x47b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x47b5a8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x47b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x47b5ac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x47b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x47b5b0: 0xc041954  jal         func_106550
    ctx->pc = 0x47B5B0u;
    SET_GPR_U32(ctx, 31, 0x47B5B8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x47B5B0u, 0x47B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B5B8u;
label_47b5b8:
    // 0x47b5b8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x47b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x47b5bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b5c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x47b5c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47b5c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x47b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47b5c8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x47b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x47b5cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x47b5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b5d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47b5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b5d4: 0xc11f120  jal         func_47C480
    ctx->pc = 0x47B5D4u;
    SET_GPR_U32(ctx, 31, 0x47B5DCu);
    ctx->pc = 0x47C480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C480u, 0x47B5D4u, 0x47B5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B5DCu;
label_47b5dc:
    // 0x47b5dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47b5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b5e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x47b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47b5e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b5e8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x47b5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47b5ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x47b5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b5f0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x47B5F0u;
    SET_GPR_U32(ctx, 31, 0x47B5F8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x47B5F0u, 0x47B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B5F8u;
label_47b5f8:
    // 0x47b5f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47b5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b5fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b600: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x47b600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47b604: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x47b604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47b608: 0xc09e180  jal         func_278600
    ctx->pc = 0x47B608u;
    SET_GPR_U32(ctx, 31, 0x47B610u);
    ctx->pc = 0x278600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278600u, 0x47B608u, 0x47B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B610u;
label_47b610:
    // 0x47b610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47b610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b614: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x47b614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x47b618: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x47B618u;
    {
        const bool branch_taken_0x47b618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b618) {
            ctx->pc = 0x47B63Cu;
            goto label_47b63c;
        }
    }
    ctx->pc = 0x47B620u;
    // 0x47b620: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x47b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47b624: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x47b624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47b628: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x47b628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47b62c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x47b62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b630: 0xc041934  jal         func_1064D0
    ctx->pc = 0x47B630u;
    SET_GPR_U32(ctx, 31, 0x47B638u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x47B630u, 0x47B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B638u;
label_47b638:
    // 0x47b638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47b638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b63c:
    // 0x47b63c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x47b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47b640: 0xc11edb4  jal         func_47B6D0
    ctx->pc = 0x47B640u;
    SET_GPR_U32(ctx, 31, 0x47B648u);
    ctx->pc = 0x47B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B6D0u, 0x47B640u, 0x47B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B648u;
label_47b648:
    // 0x47b648: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x47b648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x47b64c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x47b64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x47b650: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x47b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47b654: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47b654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b658: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x47b658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b65c: 0xc11eda0  jal         func_47B680
    ctx->pc = 0x47B65Cu;
    SET_GPR_U32(ctx, 31, 0x47B664u);
    ctx->pc = 0x47B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B680u, 0x47B65Cu, 0x47B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B664u;
label_47b664:
    // 0x47b664: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47b664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47b668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47b668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47b66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47b66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47b670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b674: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x47b674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x47b678: 0x3e00008  jr          $ra
    ctx->pc = 0x47B678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B680u;
}
