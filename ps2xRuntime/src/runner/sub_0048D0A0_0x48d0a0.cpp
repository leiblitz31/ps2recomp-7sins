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

// Function: sub_0048D0A0
// Address: 0x48d0a0 - 0x48d190
void sub_0048D0A0_0x48d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D0A0_0x48d0a0");
#endif

    switch (ctx->pc) {
        case 0x48d0a0u: goto label_48d0a0;
        case 0x48d0a4u: goto label_48d0a4;
        case 0x48d0a8u: goto label_48d0a8;
        case 0x48d0acu: goto label_48d0ac;
        case 0x48d0b0u: goto label_48d0b0;
        case 0x48d0b4u: goto label_48d0b4;
        case 0x48d0b8u: goto label_48d0b8;
        case 0x48d0bcu: goto label_48d0bc;
        case 0x48d0c0u: goto label_48d0c0;
        case 0x48d0c4u: goto label_48d0c4;
        case 0x48d0c8u: goto label_48d0c8;
        case 0x48d0ccu: goto label_48d0cc;
        case 0x48d0d0u: goto label_48d0d0;
        case 0x48d0d4u: goto label_48d0d4;
        case 0x48d0d8u: goto label_48d0d8;
        case 0x48d0dcu: goto label_48d0dc;
        case 0x48d0e0u: goto label_48d0e0;
        case 0x48d0e4u: goto label_48d0e4;
        case 0x48d0e8u: goto label_48d0e8;
        case 0x48d0ecu: goto label_48d0ec;
        case 0x48d0f0u: goto label_48d0f0;
        case 0x48d0f4u: goto label_48d0f4;
        case 0x48d0f8u: goto label_48d0f8;
        case 0x48d0fcu: goto label_48d0fc;
        case 0x48d100u: goto label_48d100;
        case 0x48d104u: goto label_48d104;
        case 0x48d108u: goto label_48d108;
        case 0x48d10cu: goto label_48d10c;
        case 0x48d110u: goto label_48d110;
        case 0x48d114u: goto label_48d114;
        case 0x48d118u: goto label_48d118;
        case 0x48d11cu: goto label_48d11c;
        case 0x48d120u: goto label_48d120;
        case 0x48d124u: goto label_48d124;
        case 0x48d128u: goto label_48d128;
        case 0x48d12cu: goto label_48d12c;
        case 0x48d130u: goto label_48d130;
        case 0x48d134u: goto label_48d134;
        case 0x48d138u: goto label_48d138;
        case 0x48d13cu: goto label_48d13c;
        case 0x48d140u: goto label_48d140;
        case 0x48d144u: goto label_48d144;
        case 0x48d148u: goto label_48d148;
        case 0x48d14cu: goto label_48d14c;
        case 0x48d150u: goto label_48d150;
        case 0x48d154u: goto label_48d154;
        case 0x48d158u: goto label_48d158;
        case 0x48d15cu: goto label_48d15c;
        case 0x48d160u: goto label_48d160;
        case 0x48d164u: goto label_48d164;
        case 0x48d168u: goto label_48d168;
        case 0x48d16cu: goto label_48d16c;
        case 0x48d170u: goto label_48d170;
        case 0x48d174u: goto label_48d174;
        case 0x48d178u: goto label_48d178;
        case 0x48d17cu: goto label_48d17c;
        case 0x48d180u: goto label_48d180;
        case 0x48d184u: goto label_48d184;
        case 0x48d188u: goto label_48d188;
        case 0x48d18cu: goto label_48d18c;
        default: break;
    }

    ctx->pc = 0x48d0a0u;

label_48d0a0:
    // 0x48d0a0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x48d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_48d0a4:
    // 0x48d0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48d0a8:
    // 0x48d0a8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x48d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_48d0ac:
    // 0x48d0ac: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x48d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48d0b0:
    // 0x48d0b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48d0b4:
    // 0x48d0b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48d0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48d0b8:
    // 0x48d0b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48d0bc:
    // 0x48d0bc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48d0c0:
    if (ctx->pc == 0x48D0C0u) {
        ctx->pc = 0x48D0C4u;
        goto label_48d0c4;
    }
    ctx->pc = 0x48D0BCu;
    {
        const bool branch_taken_0x48d0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d0bc) {
            ctx->pc = 0x48D16Cu;
            goto label_48d16c;
        }
    }
    ctx->pc = 0x48D0C4u;
label_48d0c4:
    // 0x48d0c4: 0x8f82b660  lw          $v0, -0x49A0($gp)
    ctx->pc = 0x48d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948448)));
label_48d0c8:
    // 0x48d0c8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48d0cc:
    if (ctx->pc == 0x48D0CCu) {
        ctx->pc = 0x48D0D0u;
        goto label_48d0d0;
    }
    ctx->pc = 0x48D0C8u;
    {
        const bool branch_taken_0x48d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d0c8) {
            ctx->pc = 0x48D16Cu;
            goto label_48d16c;
        }
    }
    ctx->pc = 0x48D0D0u;
label_48d0d0:
    // 0x48d0d0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48d0d4:
    // 0x48d0d4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48d0d8:
    // 0x48d0d8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x48d0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48d0dc:
    // 0x48d0dc: 0xc115ee8  jal         func_457BA0
label_48d0e0:
    if (ctx->pc == 0x48D0E0u) {
        ctx->pc = 0x48D0E4u;
        goto label_48d0e4;
    }
    ctx->pc = 0x48D0DCu;
    SET_GPR_U32(ctx, 31, 0x48D0E4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48D0DCu, 0x48D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D0E4u;
label_48d0e4:
    // 0x48d0e4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48d0e8:
    if (ctx->pc == 0x48D0E8u) {
        ctx->pc = 0x48D0ECu;
        goto label_48d0ec;
    }
    ctx->pc = 0x48D0E4u;
    {
        const bool branch_taken_0x48d0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d0e4) {
            ctx->pc = 0x48D16Cu;
            goto label_48d16c;
        }
    }
    ctx->pc = 0x48D0ECu;
label_48d0ec:
    // 0x48d0ec: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48d0f0:
    // 0x48d0f0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48d0f4:
    if (ctx->pc == 0x48D0F4u) {
        ctx->pc = 0x48D0F8u;
        goto label_48d0f8;
    }
    ctx->pc = 0x48D0F0u;
    {
        const bool branch_taken_0x48d0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d0f0) {
            ctx->pc = 0x48D16Cu;
            goto label_48d16c;
        }
    }
    ctx->pc = 0x48D0F8u;
label_48d0f8:
    // 0x48d0f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48d0fc:
    // 0x48d0fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48d100:
    // 0x48d100: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x48d100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_48d104:
    // 0x48d104: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48d104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48d108:
    // 0x48d108: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48d108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48d10c:
    // 0x48d10c: 0x240801a1  addiu       $t0, $zero, 0x1A1
    ctx->pc = 0x48d10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
label_48d110:
    // 0x48d110: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48d110u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48d114:
    // 0x48d114: 0x25294990  addiu       $t1, $t1, 0x4990
    ctx->pc = 0x48d114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18832));
label_48d118:
    // 0x48d118: 0xc113940  jal         func_44E500
label_48d11c:
    if (ctx->pc == 0x48D11Cu) {
        ctx->pc = 0x48D120u;
        goto label_48d120;
    }
    ctx->pc = 0x48D118u;
    SET_GPR_U32(ctx, 31, 0x48D120u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48D118u, 0x48D120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D120u;
label_48d120:
    // 0x48d120: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48d120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48d124:
    // 0x48d124: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48d124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48d128:
    // 0x48d128: 0x24a54b70  addiu       $a1, $a1, 0x4B70
    ctx->pc = 0x48d128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19312));
label_48d12c:
    // 0x48d12c: 0xc115c24  jal         func_457090
label_48d130:
    if (ctx->pc == 0x48D130u) {
        ctx->pc = 0x48D134u;
        goto label_48d134;
    }
    ctx->pc = 0x48D12Cu;
    SET_GPR_U32(ctx, 31, 0x48D134u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48D12Cu, 0x48D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D134u;
label_48d134:
    // 0x48d134: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48d134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48d138:
    // 0x48d138: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48d13c:
    // 0x48d13c: 0x40f809  jalr        $v0
label_48d140:
    if (ctx->pc == 0x48D140u) {
        ctx->pc = 0x48D144u;
        goto label_48d144;
    }
    ctx->pc = 0x48D13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48D144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D13Cu, 0x48D144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48D144u;
label_48d144:
    // 0x48d144: 0xaf82b660  sw          $v0, -0x49A0($gp)
    ctx->pc = 0x48d144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948448), GPR_U32(ctx, 2));
label_48d148:
    // 0x48d148: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48d14c:
    // 0x48d14c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48d150:
    if (ctx->pc == 0x48D150u) {
        ctx->pc = 0x48D154u;
        goto label_48d154;
    }
    ctx->pc = 0x48D14Cu;
    {
        const bool branch_taken_0x48d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d14c) {
            ctx->pc = 0x48D15Cu;
            goto label_48d15c;
        }
    }
    ctx->pc = 0x48D154u;
label_48d154:
    // 0x48d154: 0xd  break       0
    ctx->pc = 0x48d154u;
    runtime->handleBreak(rdram, ctx);
label_48d158:
    // 0x48d158: 0x0  nop
    ctx->pc = 0x48d158u;
    // NOP
label_48d15c:
    // 0x48d15c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48d160:
    // 0x48d160: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48d164:
    // 0x48d164: 0xc11392c  jal         func_44E4B0
label_48d168:
    if (ctx->pc == 0x48D168u) {
        ctx->pc = 0x48D16Cu;
        goto label_48d16c;
    }
    ctx->pc = 0x48D164u;
    SET_GPR_U32(ctx, 31, 0x48D16Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48D164u, 0x48D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D16Cu;
label_48d16c:
    // 0x48d16c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x48d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48d170:
    // 0x48d170: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48d174:
    // 0x48d174: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48d178:
    // 0x48d178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48d178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48d17c:
    // 0x48d17c: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x48d17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48d180:
    // 0x48d180: 0x3e00008  jr          $ra
label_48d184:
    if (ctx->pc == 0x48D184u) {
        ctx->pc = 0x48D188u;
        goto label_48d188;
    }
    ctx->pc = 0x48D180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D188u;
label_48d188:
    // 0x48d188: 0x0  nop
    ctx->pc = 0x48d188u;
    // NOP
label_48d18c:
    // 0x48d18c: 0x0  nop
    ctx->pc = 0x48d18cu;
    // NOP
    ctx->pc = 0x48d190u;
}
