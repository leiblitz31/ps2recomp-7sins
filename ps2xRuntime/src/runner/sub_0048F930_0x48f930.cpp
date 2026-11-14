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

// Function: sub_0048F930
// Address: 0x48f930 - 0x48fa20
void sub_0048F930_0x48f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F930_0x48f930");
#endif

    switch (ctx->pc) {
        case 0x48f930u: goto label_48f930;
        case 0x48f934u: goto label_48f934;
        case 0x48f938u: goto label_48f938;
        case 0x48f93cu: goto label_48f93c;
        case 0x48f940u: goto label_48f940;
        case 0x48f944u: goto label_48f944;
        case 0x48f948u: goto label_48f948;
        case 0x48f94cu: goto label_48f94c;
        case 0x48f950u: goto label_48f950;
        case 0x48f954u: goto label_48f954;
        case 0x48f958u: goto label_48f958;
        case 0x48f95cu: goto label_48f95c;
        case 0x48f960u: goto label_48f960;
        case 0x48f964u: goto label_48f964;
        case 0x48f968u: goto label_48f968;
        case 0x48f96cu: goto label_48f96c;
        case 0x48f970u: goto label_48f970;
        case 0x48f974u: goto label_48f974;
        case 0x48f978u: goto label_48f978;
        case 0x48f97cu: goto label_48f97c;
        case 0x48f980u: goto label_48f980;
        case 0x48f984u: goto label_48f984;
        case 0x48f988u: goto label_48f988;
        case 0x48f98cu: goto label_48f98c;
        case 0x48f990u: goto label_48f990;
        case 0x48f994u: goto label_48f994;
        case 0x48f998u: goto label_48f998;
        case 0x48f99cu: goto label_48f99c;
        case 0x48f9a0u: goto label_48f9a0;
        case 0x48f9a4u: goto label_48f9a4;
        case 0x48f9a8u: goto label_48f9a8;
        case 0x48f9acu: goto label_48f9ac;
        case 0x48f9b0u: goto label_48f9b0;
        case 0x48f9b4u: goto label_48f9b4;
        case 0x48f9b8u: goto label_48f9b8;
        case 0x48f9bcu: goto label_48f9bc;
        case 0x48f9c0u: goto label_48f9c0;
        case 0x48f9c4u: goto label_48f9c4;
        case 0x48f9c8u: goto label_48f9c8;
        case 0x48f9ccu: goto label_48f9cc;
        case 0x48f9d0u: goto label_48f9d0;
        case 0x48f9d4u: goto label_48f9d4;
        case 0x48f9d8u: goto label_48f9d8;
        case 0x48f9dcu: goto label_48f9dc;
        case 0x48f9e0u: goto label_48f9e0;
        case 0x48f9e4u: goto label_48f9e4;
        case 0x48f9e8u: goto label_48f9e8;
        case 0x48f9ecu: goto label_48f9ec;
        case 0x48f9f0u: goto label_48f9f0;
        case 0x48f9f4u: goto label_48f9f4;
        case 0x48f9f8u: goto label_48f9f8;
        case 0x48f9fcu: goto label_48f9fc;
        case 0x48fa00u: goto label_48fa00;
        case 0x48fa04u: goto label_48fa04;
        case 0x48fa08u: goto label_48fa08;
        case 0x48fa0cu: goto label_48fa0c;
        case 0x48fa10u: goto label_48fa10;
        case 0x48fa14u: goto label_48fa14;
        case 0x48fa18u: goto label_48fa18;
        case 0x48fa1cu: goto label_48fa1c;
        default: break;
    }

    ctx->pc = 0x48f930u;

label_48f930:
    // 0x48f930: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x48f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_48f934:
    // 0x48f934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48f938:
    // 0x48f938: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x48f938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_48f93c:
    // 0x48f93c: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x48f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
label_48f940:
    // 0x48f940: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x48f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48f944:
    // 0x48f944: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x48f944u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_48f948:
    // 0x48f948: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48f948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48f94c:
    // 0x48f94c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_48f950:
    if (ctx->pc == 0x48F950u) {
        ctx->pc = 0x48F954u;
        goto label_48f954;
    }
    ctx->pc = 0x48F94Cu;
    {
        const bool branch_taken_0x48f94c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f94c) {
            ctx->pc = 0x48F9FCu;
            goto label_48f9fc;
        }
    }
    ctx->pc = 0x48F954u;
label_48f954:
    // 0x48f954: 0x8f83b6a8  lw          $v1, -0x4958($gp)
    ctx->pc = 0x48f954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948520)));
label_48f958:
    // 0x48f958: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_48f95c:
    if (ctx->pc == 0x48F95Cu) {
        ctx->pc = 0x48F960u;
        goto label_48f960;
    }
    ctx->pc = 0x48F958u;
    {
        const bool branch_taken_0x48f958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f958) {
            ctx->pc = 0x48F9FCu;
            goto label_48f9fc;
        }
    }
    ctx->pc = 0x48F960u;
label_48f960:
    // 0x48f960: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48f960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48f964:
    // 0x48f964: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48f964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48f968:
    // 0x48f968: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x48f968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48f96c:
    // 0x48f96c: 0xc115ee8  jal         func_457BA0
label_48f970:
    if (ctx->pc == 0x48F970u) {
        ctx->pc = 0x48F974u;
        goto label_48f974;
    }
    ctx->pc = 0x48F96Cu;
    SET_GPR_U32(ctx, 31, 0x48F974u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48F96Cu, 0x48F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F974u;
label_48f974:
    // 0x48f974: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48f978:
    if (ctx->pc == 0x48F978u) {
        ctx->pc = 0x48F97Cu;
        goto label_48f97c;
    }
    ctx->pc = 0x48F974u;
    {
        const bool branch_taken_0x48f974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f974) {
            ctx->pc = 0x48F9FCu;
            goto label_48f9fc;
        }
    }
    ctx->pc = 0x48F97Cu;
label_48f97c:
    // 0x48f97c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x48f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48f980:
    // 0x48f980: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_48f984:
    if (ctx->pc == 0x48F984u) {
        ctx->pc = 0x48F988u;
        goto label_48f988;
    }
    ctx->pc = 0x48F980u;
    {
        const bool branch_taken_0x48f980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f980) {
            ctx->pc = 0x48F9FCu;
            goto label_48f9fc;
        }
    }
    ctx->pc = 0x48F988u;
label_48f988:
    // 0x48f988: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48f98c:
    // 0x48f98c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48f98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48f990:
    // 0x48f990: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x48f990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_48f994:
    // 0x48f994: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48f994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48f998:
    // 0x48f998: 0x24e74d80  addiu       $a3, $a3, 0x4D80
    ctx->pc = 0x48f998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19840));
label_48f99c:
    // 0x48f99c: 0x24080149  addiu       $t0, $zero, 0x149
    ctx->pc = 0x48f99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
label_48f9a0:
    // 0x48f9a0: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48f9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48f9a4:
    // 0x48f9a4: 0x25294fe0  addiu       $t1, $t1, 0x4FE0
    ctx->pc = 0x48f9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20448));
label_48f9a8:
    // 0x48f9a8: 0xc113940  jal         func_44E500
label_48f9ac:
    if (ctx->pc == 0x48F9ACu) {
        ctx->pc = 0x48F9B0u;
        goto label_48f9b0;
    }
    ctx->pc = 0x48F9A8u;
    SET_GPR_U32(ctx, 31, 0x48F9B0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48F9A8u, 0x48F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F9B0u;
label_48f9b0:
    // 0x48f9b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48f9b4:
    // 0x48f9b4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48f9b8:
    // 0x48f9b8: 0x24a55000  addiu       $a1, $a1, 0x5000
    ctx->pc = 0x48f9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
label_48f9bc:
    // 0x48f9bc: 0xc115c24  jal         func_457090
label_48f9c0:
    if (ctx->pc == 0x48F9C0u) {
        ctx->pc = 0x48F9C4u;
        goto label_48f9c4;
    }
    ctx->pc = 0x48F9BCu;
    SET_GPR_U32(ctx, 31, 0x48F9C4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48F9BCu, 0x48F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F9C4u;
label_48f9c4:
    // 0x48f9c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48f9c8:
    // 0x48f9c8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48f9cc:
    // 0x48f9cc: 0x40f809  jalr        $v0
label_48f9d0:
    if (ctx->pc == 0x48F9D0u) {
        ctx->pc = 0x48F9D4u;
        goto label_48f9d4;
    }
    ctx->pc = 0x48F9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48F9D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F9CCu, 0x48F9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48F9D4u;
label_48f9d4:
    // 0x48f9d4: 0xaf82b6a8  sw          $v0, -0x4958($gp)
    ctx->pc = 0x48f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948520), GPR_U32(ctx, 2));
label_48f9d8:
    // 0x48f9d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48f9dc:
    // 0x48f9dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48f9e0:
    if (ctx->pc == 0x48F9E0u) {
        ctx->pc = 0x48F9E4u;
        goto label_48f9e4;
    }
    ctx->pc = 0x48F9DCu;
    {
        const bool branch_taken_0x48f9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f9dc) {
            ctx->pc = 0x48F9ECu;
            goto label_48f9ec;
        }
    }
    ctx->pc = 0x48F9E4u;
label_48f9e4:
    // 0x48f9e4: 0xd  break       0
    ctx->pc = 0x48f9e4u;
    runtime->handleBreak(rdram, ctx);
label_48f9e8:
    // 0x48f9e8: 0x0  nop
    ctx->pc = 0x48f9e8u;
    // NOP
label_48f9ec:
    // 0x48f9ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48f9f0:
    // 0x48f9f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48f9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48f9f4:
    // 0x48f9f4: 0xc11392c  jal         func_44E4B0
label_48f9f8:
    if (ctx->pc == 0x48F9F8u) {
        ctx->pc = 0x48F9FCu;
        goto label_48f9fc;
    }
    ctx->pc = 0x48F9F4u;
    SET_GPR_U32(ctx, 31, 0x48F9FCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48F9F4u, 0x48F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F9FCu;
label_48f9fc:
    // 0x48f9fc: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x48f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48fa00:
    // 0x48fa00: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x48fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48fa04:
    // 0x48fa04: 0xac640040  sw          $a0, 0x40($v1)
    ctx->pc = 0x48fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
label_48fa08:
    // 0x48fa08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48fa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48fa0c:
    // 0x48fa0c: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x48fa0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48fa10:
    // 0x48fa10: 0x3e00008  jr          $ra
label_48fa14:
    if (ctx->pc == 0x48FA14u) {
        ctx->pc = 0x48FA18u;
        goto label_48fa18;
    }
    ctx->pc = 0x48FA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FA18u;
label_48fa18:
    // 0x48fa18: 0x0  nop
    ctx->pc = 0x48fa18u;
    // NOP
label_48fa1c:
    // 0x48fa1c: 0x0  nop
    ctx->pc = 0x48fa1cu;
    // NOP
    ctx->pc = 0x48fa20u;
}
