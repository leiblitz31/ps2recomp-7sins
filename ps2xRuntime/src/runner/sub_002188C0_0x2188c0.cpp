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

// Function: sub_002188C0
// Address: 0x2188c0 - 0x2189b0
void sub_002188C0_0x2188c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002188C0_0x2188c0");
#endif

    switch (ctx->pc) {
        case 0x2188e0u: goto label_2188e0;
        case 0x2188f4u: goto label_2188f4;
        case 0x218904u: goto label_218904;
        case 0x218914u: goto label_218914;
        case 0x218924u: goto label_218924;
        case 0x218938u: goto label_218938;
        case 0x218958u: goto label_218958;
        case 0x218978u: goto label_218978;
        case 0x21898cu: goto label_21898c;
        default: break;
    }

    ctx->pc = 0x2188c0u;

    // 0x2188c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2188c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2188c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2188c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2188c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2188c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2188cc: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2188ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2188d0: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2188d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2188d4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2188d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2188d8: 0xc040304  jal         func_100C10
    ctx->pc = 0x2188D8u;
    SET_GPR_U32(ctx, 31, 0x2188E0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2188D8u, 0x2188E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188E0u;
label_2188e0:
    // 0x2188e0: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2188e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2188e4: 0x8f85bb78  lw          $a1, -0x4488($gp)
    ctx->pc = 0x2188e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949752)));
    // 0x2188e8: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x2188e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2188ec: 0xc0863b4  jal         func_218ED0
    ctx->pc = 0x2188ECu;
    SET_GPR_U32(ctx, 31, 0x2188F4u);
    ctx->pc = 0x218ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218ED0u, 0x2188ECu, 0x2188F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188F4u;
label_2188f4:
    // 0x2188f4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2188f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2188f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2188f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2188fc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2188FCu;
    SET_GPR_U32(ctx, 31, 0x218904u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2188FCu, 0x218904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218904u;
label_218904:
    // 0x218904: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x218904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x218908: 0x8f85bb78  lw          $a1, -0x4488($gp)
    ctx->pc = 0x218908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949752)));
    // 0x21890c: 0xc0861b8  jal         func_2186E0
    ctx->pc = 0x21890Cu;
    SET_GPR_U32(ctx, 31, 0x218914u);
    ctx->pc = 0x2186E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2186E0u, 0x21890Cu, 0x218914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218914u;
label_218914:
    // 0x218914: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x218914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x218918: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x218918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x21891c: 0xc041998  jal         func_106660
    ctx->pc = 0x21891Cu;
    SET_GPR_U32(ctx, 31, 0x218924u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x21891Cu, 0x218924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218924u;
label_218924:
    // 0x218924: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x218924u;
    {
        const bool branch_taken_0x218924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218924) {
            ctx->pc = 0x218948u;
            goto label_218948;
        }
    }
    ctx->pc = 0x21892Cu;
    // 0x21892c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x21892cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x218930: 0xc0861f4  jal         func_2187D0
    ctx->pc = 0x218930u;
    SET_GPR_U32(ctx, 31, 0x218938u);
    ctx->pc = 0x2187D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2187D0u, 0x218930u, 0x218938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218938u;
label_218938:
    // 0x218938: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x218938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21893c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x21893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218940: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x218940u;
    {
        const bool branch_taken_0x218940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218940) {
            ctx->pc = 0x218994u;
            goto label_218994;
        }
    }
    ctx->pc = 0x218948u;
label_218948:
    // 0x218948: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x218948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x21894c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x21894cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218950: 0xc040304  jal         func_100C10
    ctx->pc = 0x218950u;
    SET_GPR_U32(ctx, 31, 0x218958u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x218950u, 0x218958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218958u;
label_218958:
    // 0x218958: 0x97829b38  lhu         $v0, -0x64C8($gp)
    ctx->pc = 0x218958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941496)));
    // 0x21895c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x218960: 0xa7829b38  sh          $v0, -0x64C8($gp)
    ctx->pc = 0x218960u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941496), (uint16_t)GPR_U32(ctx, 2));
    // 0x218964: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x218964u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218968: 0x8f84bb78  lw          $a0, -0x4488($gp)
    ctx->pc = 0x218968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949752)));
    // 0x21896c: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x21896cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x218970: 0xc08626c  jal         func_2189B0
    ctx->pc = 0x218970u;
    SET_GPR_U32(ctx, 31, 0x218978u);
    ctx->pc = 0x2189B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2189B0u, 0x218970u, 0x218978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218978u;
label_218978:
    // 0x218978: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x218978u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x21897c: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x21897cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x218980: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x218980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218984: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x218984u;
    SET_GPR_U32(ctx, 31, 0x21898Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x218984u, 0x21898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21898Cu;
label_21898c:
    // 0x21898c: 0x97829b38  lhu         $v0, -0x64C8($gp)
    ctx->pc = 0x21898cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941496)));
    // 0x218990: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x218990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_218994:
    // 0x218994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x218994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21899c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x21899cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2189a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2189A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2189A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2189A8u;
    // 0x2189a8: 0x0  nop
    ctx->pc = 0x2189a8u;
    // NOP
    // 0x2189ac: 0x0  nop
    ctx->pc = 0x2189acu;
    // NOP
    ctx->pc = 0x2189b0u;
}
