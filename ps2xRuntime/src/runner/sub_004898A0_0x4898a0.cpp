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

// Function: sub_004898A0
// Address: 0x4898a0 - 0x4899e0
void sub_004898A0_0x4898a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004898A0_0x4898a0");
#endif

    switch (ctx->pc) {
        case 0x4898e4u: goto label_4898e4;
        case 0x4898f4u: goto label_4898f4;
        case 0x48991cu: goto label_48991c;
        case 0x489944u: goto label_489944;
        case 0x48996cu: goto label_48996c;
        case 0x489994u: goto label_489994;
        case 0x4899bcu: goto label_4899bc;
        case 0x4899ccu: goto label_4899cc;
        default: break;
    }

    ctx->pc = 0x4898a0u;

    // 0x4898a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x4898a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x4898a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4898a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4898a8: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x4898a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x4898ac: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x4898acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4898b0: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x4898B0u;
    {
        const bool branch_taken_0x4898b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4898b0) {
            ctx->pc = 0x4899CCu;
            goto label_4899cc;
        }
    }
    ctx->pc = 0x4898B8u;
    // 0x4898b8: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x4898b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4898bc: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x4898bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4898c0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x4898c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4898c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4898c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4898c8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4898c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4898cc: 0x24a54560  addiu       $a1, $a1, 0x4560
    ctx->pc = 0x4898ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17760));
    // 0x4898d0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4898d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4898d4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x4898d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4898d8: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x4898d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4898dc: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x4898DCu;
    SET_GPR_U32(ctx, 31, 0x4898E4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x4898DCu, 0x4898E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4898E4u;
label_4898e4:
    // 0x4898e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4898e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4898e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4898e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4898ec: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x4898ECu;
    SET_GPR_U32(ctx, 31, 0x4898F4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4898ECu, 0x4898F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4898F4u;
label_4898f4:
    // 0x4898f4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x4898f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4898f8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4898f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4898fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4898fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x489900: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x489900u;
    {
        const bool branch_taken_0x489900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489900) {
            ctx->pc = 0x48991Cu;
            goto label_48991c;
        }
    }
    ctx->pc = 0x489908u;
    // 0x489908: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x489908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x48990c: 0x24844580  addiu       $a0, $a0, 0x4580
    ctx->pc = 0x48990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x489910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x489910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489914: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x489914u;
    SET_GPR_U32(ctx, 31, 0x48991Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x489914u, 0x48991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48991Cu;
label_48991c:
    // 0x48991c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x48991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x489920: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x489920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x489924: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x489924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x489928: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x489928u;
    {
        const bool branch_taken_0x489928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489928) {
            ctx->pc = 0x489944u;
            goto label_489944;
        }
    }
    ctx->pc = 0x489930u;
    // 0x489930: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x489930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x489934: 0x248445a0  addiu       $a0, $a0, 0x45A0
    ctx->pc = 0x489934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17824));
    // 0x489938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x489938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48993c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x48993Cu;
    SET_GPR_U32(ctx, 31, 0x489944u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x48993Cu, 0x489944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489944u;
label_489944:
    // 0x489944: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x489944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x489948: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x489948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x48994c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x48994cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x489950: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x489950u;
    {
        const bool branch_taken_0x489950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489950) {
            ctx->pc = 0x48996Cu;
            goto label_48996c;
        }
    }
    ctx->pc = 0x489958u;
    // 0x489958: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x489958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x48995c: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x48995cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    // 0x489960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x489960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489964: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x489964u;
    SET_GPR_U32(ctx, 31, 0x48996Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x489964u, 0x48996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48996Cu;
label_48996c:
    // 0x48996c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x48996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x489970: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x489970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x489974: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x489974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x489978: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x489978u;
    {
        const bool branch_taken_0x489978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489978) {
            ctx->pc = 0x489994u;
            goto label_489994;
        }
    }
    ctx->pc = 0x489980u;
    // 0x489980: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x489980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x489984: 0x248445e0  addiu       $a0, $a0, 0x45E0
    ctx->pc = 0x489984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17888));
    // 0x489988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x489988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48998c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x48998Cu;
    SET_GPR_U32(ctx, 31, 0x489994u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x48998Cu, 0x489994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489994u;
label_489994:
    // 0x489994: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x489994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x489998: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x489998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x48999c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x48999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4899a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4899A0u;
    {
        const bool branch_taken_0x4899a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4899a0) {
            ctx->pc = 0x4899BCu;
            goto label_4899bc;
        }
    }
    ctx->pc = 0x4899A8u;
    // 0x4899a8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x4899a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x4899ac: 0x24844600  addiu       $a0, $a0, 0x4600
    ctx->pc = 0x4899acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    // 0x4899b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4899b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4899b4: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x4899B4u;
    SET_GPR_U32(ctx, 31, 0x4899BCu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4899B4u, 0x4899BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4899BCu;
label_4899bc:
    // 0x4899bc: 0x2784b600  addiu       $a0, $gp, -0x4A00
    ctx->pc = 0x4899bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948352));
    // 0x4899c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4899c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4899c4: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x4899C4u;
    SET_GPR_U32(ctx, 31, 0x4899CCu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4899C4u, 0x4899CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4899CCu;
label_4899cc:
    // 0x4899cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4899ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4899d0: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x4899d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x4899d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4899D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4899D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4899DCu;
    // 0x4899dc: 0x0  nop
    ctx->pc = 0x4899dcu;
    // NOP
    ctx->pc = 0x4899e0u;
}
