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

// Function: sub_002275E0
// Address: 0x2275e0 - 0x227770
void sub_002275E0_0x2275e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002275E0_0x2275e0");
#endif

    switch (ctx->pc) {
        case 0x227664u: goto label_227664;
        case 0x227680u: goto label_227680;
        case 0x227690u: goto label_227690;
        default: break;
    }

    ctx->pc = 0x2275e0u;

    // 0x2275e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2275e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2275e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2275e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2275e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2275e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2275ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2275ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2275f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2275f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2275f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2275f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2275f8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2275f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2275fc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2275fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x227600: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x227600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227604: 0x8c500048  lw          $s0, 0x48($v0)
    ctx->pc = 0x227604u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x227608: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x227608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x22760c: 0x24427380  addiu       $v0, $v0, 0x7380
    ctx->pc = 0x22760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
    // 0x227610: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227610u;
    {
        const bool branch_taken_0x227610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x227610) {
            ctx->pc = 0x227634u;
            goto label_227634;
        }
    }
    ctx->pc = 0x227618u;
    // 0x227618: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x227618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22761c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x22761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x227620: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x227620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227624: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x227624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227628: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x227628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x22762c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x22762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227630: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x227630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_227634:
    // 0x227634: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x227634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x227638: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x227638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22763c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x22763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227640: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x227640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x227644: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227648: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x227648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x22764c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227650: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x227650u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x227654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22765c: 0xc0e0c2e  jal         func_3830B8
    ctx->pc = 0x22765Cu;
    SET_GPR_U32(ctx, 31, 0x227664u);
    ctx->pc = 0x3830B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830B8u, 0x22765Cu, 0x227664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227664u;
label_227664:
    // 0x227664: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x227664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227668: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x227668u;
    {
        const bool branch_taken_0x227668 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x227668) {
            ctx->pc = 0x2276D4u;
            goto label_2276d4;
        }
    }
    ctx->pc = 0x227670u;
    // 0x227670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227678: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x227678u;
    SET_GPR_U32(ctx, 31, 0x227680u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x227678u, 0x227680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227680u;
label_227680:
    // 0x227680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227684: 0x27859c90  addiu       $a1, $gp, -0x6370
    ctx->pc = 0x227684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941840));
    // 0x227688: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x227688u;
    SET_GPR_U32(ctx, 31, 0x227690u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x227688u, 0x227690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227690u;
label_227690:
    // 0x227690: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x227690u;
    {
        const bool branch_taken_0x227690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227690) {
            ctx->pc = 0x2276D4u;
            goto label_2276d4;
        }
    }
    ctx->pc = 0x227698u;
    // 0x227698: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x227698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22769c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x22769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2276a0: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2276a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x2276a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2276a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2276a8: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x2276a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x2276ac: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2276acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2276b0: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2276b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x2276b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2276b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2276b8: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x2276b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x2276bc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x2276bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x2276c0: 0x24847380  addiu       $a0, $a0, 0x7380
    ctx->pc = 0x2276c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29568));
    // 0x2276c4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2276c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2276c8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2276c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x2276cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2276ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2276d0: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x2276d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_2276d4:
    // 0x2276d4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2276d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2276d8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2276d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x2276dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2276dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2276e0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2276e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2276e4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2276e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2276e8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2276E8u;
    {
        const bool branch_taken_0x2276e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2276e8) {
            ctx->pc = 0x227718u;
            goto label_227718;
        }
    }
    ctx->pc = 0x2276F0u;
    // 0x2276f0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2276f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2276f4: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2276f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x2276f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2276f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2276fc: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x2276fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x227700: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x227700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x227704: 0x24847380  addiu       $a0, $a0, 0x7380
    ctx->pc = 0x227704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29568));
    // 0x227708: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x227708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22770c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x22770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x227710: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227714: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x227714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_227718:
    // 0x227718: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x227718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x22771c: 0x24637380  addiu       $v1, $v1, 0x7380
    ctx->pc = 0x22771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29568));
    // 0x227720: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x227720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227724: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x227724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x227728: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x227728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22772c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x22772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x227730: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227730u;
    {
        const bool branch_taken_0x227730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227730) {
            ctx->pc = 0x227748u;
            goto label_227748;
        }
    }
    ctx->pc = 0x227738u;
    // 0x227738: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x227738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x22773c: 0x24639850  addiu       $v1, $v1, -0x67B0
    ctx->pc = 0x22773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940752));
    // 0x227740: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x227740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227744: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x227744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_227748:
    // 0x227748: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x227748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22774c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22774cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227750: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x227750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x227754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x227758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22775c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22775cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227760: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x227760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x227764: 0x3e00008  jr          $ra
    ctx->pc = 0x227764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22776Cu;
    // 0x22776c: 0x0  nop
    ctx->pc = 0x22776cu;
    // NOP
    ctx->pc = 0x227770u;
}
