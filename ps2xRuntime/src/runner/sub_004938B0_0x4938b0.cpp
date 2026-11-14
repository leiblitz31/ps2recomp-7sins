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

// Function: sub_004938B0
// Address: 0x4938b0 - 0x4939a0
void sub_004938B0_0x4938b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004938B0_0x4938b0");
#endif

    switch (ctx->pc) {
        case 0x4938b0u: goto label_4938b0;
        case 0x4938b4u: goto label_4938b4;
        case 0x4938b8u: goto label_4938b8;
        case 0x4938bcu: goto label_4938bc;
        case 0x4938c0u: goto label_4938c0;
        case 0x4938c4u: goto label_4938c4;
        case 0x4938c8u: goto label_4938c8;
        case 0x4938ccu: goto label_4938cc;
        case 0x4938d0u: goto label_4938d0;
        case 0x4938d4u: goto label_4938d4;
        case 0x4938d8u: goto label_4938d8;
        case 0x4938dcu: goto label_4938dc;
        case 0x4938e0u: goto label_4938e0;
        case 0x4938e4u: goto label_4938e4;
        case 0x4938e8u: goto label_4938e8;
        case 0x4938ecu: goto label_4938ec;
        case 0x4938f0u: goto label_4938f0;
        case 0x4938f4u: goto label_4938f4;
        case 0x4938f8u: goto label_4938f8;
        case 0x4938fcu: goto label_4938fc;
        case 0x493900u: goto label_493900;
        case 0x493904u: goto label_493904;
        case 0x493908u: goto label_493908;
        case 0x49390cu: goto label_49390c;
        case 0x493910u: goto label_493910;
        case 0x493914u: goto label_493914;
        case 0x493918u: goto label_493918;
        case 0x49391cu: goto label_49391c;
        case 0x493920u: goto label_493920;
        case 0x493924u: goto label_493924;
        case 0x493928u: goto label_493928;
        case 0x49392cu: goto label_49392c;
        case 0x493930u: goto label_493930;
        case 0x493934u: goto label_493934;
        case 0x493938u: goto label_493938;
        case 0x49393cu: goto label_49393c;
        case 0x493940u: goto label_493940;
        case 0x493944u: goto label_493944;
        case 0x493948u: goto label_493948;
        case 0x49394cu: goto label_49394c;
        case 0x493950u: goto label_493950;
        case 0x493954u: goto label_493954;
        case 0x493958u: goto label_493958;
        case 0x49395cu: goto label_49395c;
        case 0x493960u: goto label_493960;
        case 0x493964u: goto label_493964;
        case 0x493968u: goto label_493968;
        case 0x49396cu: goto label_49396c;
        case 0x493970u: goto label_493970;
        case 0x493974u: goto label_493974;
        case 0x493978u: goto label_493978;
        case 0x49397cu: goto label_49397c;
        case 0x493980u: goto label_493980;
        case 0x493984u: goto label_493984;
        case 0x493988u: goto label_493988;
        case 0x49398cu: goto label_49398c;
        case 0x493990u: goto label_493990;
        case 0x493994u: goto label_493994;
        case 0x493998u: goto label_493998;
        case 0x49399cu: goto label_49399c;
        default: break;
    }

    ctx->pc = 0x4938b0u;

label_4938b0:
    // 0x4938b0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x4938b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_4938b4:
    // 0x4938b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4938b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4938b8:
    // 0x4938b8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x4938b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_4938bc:
    // 0x4938bc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x4938bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4938c0:
    // 0x4938c0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4938c4:
    if (ctx->pc == 0x4938C4u) {
        ctx->pc = 0x4938C8u;
        goto label_4938c8;
    }
    ctx->pc = 0x4938C0u;
    {
        const bool branch_taken_0x4938c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4938c0) {
            ctx->pc = 0x49396Cu;
            goto label_49396c;
        }
    }
    ctx->pc = 0x4938C8u;
label_4938c8:
    // 0x4938c8: 0x8f82b708  lw          $v0, -0x48F8($gp)
    ctx->pc = 0x4938c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948616)));
label_4938cc:
    // 0x4938cc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4938d0:
    if (ctx->pc == 0x4938D0u) {
        ctx->pc = 0x4938D4u;
        goto label_4938d4;
    }
    ctx->pc = 0x4938CCu;
    {
        const bool branch_taken_0x4938cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4938cc) {
            ctx->pc = 0x49396Cu;
            goto label_49396c;
        }
    }
    ctx->pc = 0x4938D4u;
label_4938d4:
    // 0x4938d4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4938d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4938d8:
    // 0x4938d8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4938d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4938dc:
    // 0x4938dc: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x4938dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4938e0:
    // 0x4938e0: 0xc115ee8  jal         func_457BA0
label_4938e4:
    if (ctx->pc == 0x4938E4u) {
        ctx->pc = 0x4938E8u;
        goto label_4938e8;
    }
    ctx->pc = 0x4938E0u;
    SET_GPR_U32(ctx, 31, 0x4938E8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4938E0u, 0x4938E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4938E8u;
label_4938e8:
    // 0x4938e8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4938ec:
    if (ctx->pc == 0x4938ECu) {
        ctx->pc = 0x4938F0u;
        goto label_4938f0;
    }
    ctx->pc = 0x4938E8u;
    {
        const bool branch_taken_0x4938e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4938e8) {
            ctx->pc = 0x49396Cu;
            goto label_49396c;
        }
    }
    ctx->pc = 0x4938F0u;
label_4938f0:
    // 0x4938f0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x4938f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_4938f4:
    // 0x4938f4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4938f8:
    if (ctx->pc == 0x4938F8u) {
        ctx->pc = 0x4938FCu;
        goto label_4938fc;
    }
    ctx->pc = 0x4938F4u;
    {
        const bool branch_taken_0x4938f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4938f4) {
            ctx->pc = 0x49396Cu;
            goto label_49396c;
        }
    }
    ctx->pc = 0x4938FCu;
label_4938fc:
    // 0x4938fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4938fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_493900:
    // 0x493900: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x493900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_493904:
    // 0x493904: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x493904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_493908:
    // 0x493908: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x493908u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_49390c:
    // 0x49390c: 0x24e75080  addiu       $a3, $a3, 0x5080
    ctx->pc = 0x49390cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20608));
label_493910:
    // 0x493910: 0x24080115  addiu       $t0, $zero, 0x115
    ctx->pc = 0x493910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
label_493914:
    // 0x493914: 0x2789b710  addiu       $t1, $gp, -0x48F0
    ctx->pc = 0x493914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948624));
label_493918:
    // 0x493918: 0xc113940  jal         func_44E500
label_49391c:
    if (ctx->pc == 0x49391Cu) {
        ctx->pc = 0x493920u;
        goto label_493920;
    }
    ctx->pc = 0x493918u;
    SET_GPR_U32(ctx, 31, 0x493920u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x493918u, 0x493920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493920u;
label_493920:
    // 0x493920: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x493920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_493924:
    // 0x493924: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x493924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_493928:
    // 0x493928: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x493928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
label_49392c:
    // 0x49392c: 0xc115c24  jal         func_457090
label_493930:
    if (ctx->pc == 0x493930u) {
        ctx->pc = 0x493934u;
        goto label_493934;
    }
    ctx->pc = 0x49392Cu;
    SET_GPR_U32(ctx, 31, 0x493934u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x49392Cu, 0x493934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493934u;
label_493934:
    // 0x493934: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x493934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_493938:
    // 0x493938: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x493938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_49393c:
    // 0x49393c: 0x40f809  jalr        $v0
label_493940:
    if (ctx->pc == 0x493940u) {
        ctx->pc = 0x493944u;
        goto label_493944;
    }
    ctx->pc = 0x49393Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x493944u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49393Cu, 0x493944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x493944u;
label_493944:
    // 0x493944: 0xaf82b708  sw          $v0, -0x48F8($gp)
    ctx->pc = 0x493944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948616), GPR_U32(ctx, 2));
label_493948:
    // 0x493948: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_49394c:
    // 0x49394c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_493950:
    if (ctx->pc == 0x493950u) {
        ctx->pc = 0x493954u;
        goto label_493954;
    }
    ctx->pc = 0x49394Cu;
    {
        const bool branch_taken_0x49394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49394c) {
            ctx->pc = 0x49395Cu;
            goto label_49395c;
        }
    }
    ctx->pc = 0x493954u;
label_493954:
    // 0x493954: 0xd  break       0
    ctx->pc = 0x493954u;
    runtime->handleBreak(rdram, ctx);
label_493958:
    // 0x493958: 0x0  nop
    ctx->pc = 0x493958u;
    // NOP
label_49395c:
    // 0x49395c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x49395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_493960:
    // 0x493960: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x493960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_493964:
    // 0x493964: 0xc11392c  jal         func_44E4B0
label_493968:
    if (ctx->pc == 0x493968u) {
        ctx->pc = 0x49396Cu;
        goto label_49396c;
    }
    ctx->pc = 0x493964u;
    SET_GPR_U32(ctx, 31, 0x49396Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x493964u, 0x49396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49396Cu;
label_49396c:
    // 0x49396c: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x49396cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_493970:
    // 0x493970: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x493970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_493974:
    // 0x493974: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x493974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_493978:
    // 0x493978: 0x24a539a0  addiu       $a1, $a1, 0x39A0
    ctx->pc = 0x493978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14752));
label_49397c:
    // 0x49397c: 0x27a6013c  addiu       $a2, $sp, 0x13C
    ctx->pc = 0x49397cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_493980:
    // 0x493980: 0xc0e2628  jal         func_3898A0
label_493984:
    if (ctx->pc == 0x493984u) {
        ctx->pc = 0x493988u;
        goto label_493988;
    }
    ctx->pc = 0x493980u;
    SET_GPR_U32(ctx, 31, 0x493988u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x493980u, 0x493988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493988u;
label_493988:
    // 0x493988: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x493988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_49398c:
    // 0x49398c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49398cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_493990:
    // 0x493990: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x493990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_493994:
    // 0x493994: 0x3e00008  jr          $ra
label_493998:
    if (ctx->pc == 0x493998u) {
        ctx->pc = 0x49399Cu;
        goto label_49399c;
    }
    ctx->pc = 0x493994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49399Cu;
label_49399c:
    // 0x49399c: 0x0  nop
    ctx->pc = 0x49399cu;
    // NOP
    ctx->pc = 0x4939a0u;
}
