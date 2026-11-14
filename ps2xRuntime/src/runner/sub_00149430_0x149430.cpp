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

// Function: sub_00149430
// Address: 0x149430 - 0x149650
void sub_00149430_0x149430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149430_0x149430");
#endif

    switch (ctx->pc) {
        case 0x14944cu: goto label_14944c;
        case 0x14947cu: goto label_14947c;
        case 0x1494f4u: goto label_1494f4;
        case 0x14952cu: goto label_14952c;
        case 0x149610u: goto label_149610;
        case 0x149638u: goto label_149638;
        default: break;
    }

    ctx->pc = 0x149430u;

    // 0x149430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14943c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149440: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x149440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149444: 0xc052994  jal         func_14A650
    ctx->pc = 0x149444u;
    SET_GPR_U32(ctx, 31, 0x14944Cu);
    ctx->pc = 0x14A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A650u, 0x149444u, 0x14944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14944Cu;
label_14944c:
    // 0x14944c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149450: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x149450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149454: 0x3e00008  jr          $ra
    ctx->pc = 0x149454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14945Cu;
    // 0x14945c: 0x0  nop
    ctx->pc = 0x14945cu;
    // NOP
    // 0x149460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14946c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14946cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x149470: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149474: 0xc0852ac  jal         func_214AB0
    ctx->pc = 0x149474u;
    SET_GPR_U32(ctx, 31, 0x14947Cu);
    ctx->pc = 0x214AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AB0u, 0x149474u, 0x14947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14947Cu;
label_14947c:
    // 0x14947c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x14947cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x149480: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149484: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x149484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x149488: 0x10020009  beq         $zero, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x149488u;
    {
        const bool branch_taken_0x149488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x149488) {
            ctx->pc = 0x1494B0u;
            goto label_1494b0;
        }
    }
    ctx->pc = 0x149490u;
    // 0x149490: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x149490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x149494: 0x24639680  addiu       $v1, $v1, -0x6980
    ctx->pc = 0x149494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940288));
    // 0x149498: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14949c: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x14949cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x1494a0: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1494a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1494a4: 0x24639690  addiu       $v1, $v1, -0x6970
    ctx->pc = 0x1494a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940304));
    // 0x1494a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1494a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1494ac: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1494acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_1494b0:
    // 0x1494b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1494b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1494b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1494b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1494b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1494bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1494bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1494c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1494C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1494C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1494C8u;
    // 0x1494c8: 0x0  nop
    ctx->pc = 0x1494c8u;
    // NOP
    // 0x1494cc: 0x0  nop
    ctx->pc = 0x1494ccu;
    // NOP
    // 0x1494d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1494d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1494d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1494d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1494d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1494d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1494dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1494dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1494e0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1494e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1494e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1494e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1494e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1494e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1494ec: 0xc0852b8  jal         func_214AE0
    ctx->pc = 0x1494ECu;
    SET_GPR_U32(ctx, 31, 0x1494F4u);
    ctx->pc = 0x214AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AE0u, 0x1494ECu, 0x1494F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494F4u;
label_1494f4:
    // 0x1494f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1494f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1494f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1494f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1494fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149504: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x149504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x149508: 0x3e00008  jr          $ra
    ctx->pc = 0x149508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149510u;
    // 0x149510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14951c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14951cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x149520: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149524: 0xc0852c4  jal         func_214B10
    ctx->pc = 0x149524u;
    SET_GPR_U32(ctx, 31, 0x14952Cu);
    ctx->pc = 0x214B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B10u, 0x149524u, 0x14952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14952Cu;
label_14952c:
    // 0x14952c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x14952cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x149530: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x149530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14953c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14953cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149540: 0x3e00008  jr          $ra
    ctx->pc = 0x149540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149548u;
    // 0x149548: 0x0  nop
    ctx->pc = 0x149548u;
    // NOP
    // 0x14954c: 0x0  nop
    ctx->pc = 0x14954cu;
    // NOP
    // 0x149550: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x149550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x149554: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x149554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x149558: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x149558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14955c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x149560: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x149560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x149564: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x149564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x149568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14956c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149578: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x149578u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14957c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14957cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149580: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x149580u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149584: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x149584u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149588: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x149588u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14958c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14958cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14959c: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x14959cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1495a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1495A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1495A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1495A8u;
    // 0x1495a8: 0x0  nop
    ctx->pc = 0x1495a8u;
    // NOP
    // 0x1495ac: 0x0  nop
    ctx->pc = 0x1495acu;
    // NOP
    // 0x1495b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1495b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1495b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1495b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1495b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1495bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1495BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1495BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1495C4u;
    // 0x1495c4: 0x0  nop
    ctx->pc = 0x1495c4u;
    // NOP
    // 0x1495c8: 0x0  nop
    ctx->pc = 0x1495c8u;
    // NOP
    // 0x1495cc: 0x0  nop
    ctx->pc = 0x1495ccu;
    // NOP
    // 0x1495d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1495d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1495d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1495d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1495d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1495dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1495DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1495DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1495E4u;
    // 0x1495e4: 0x0  nop
    ctx->pc = 0x1495e4u;
    // NOP
    // 0x1495e8: 0x0  nop
    ctx->pc = 0x1495e8u;
    // NOP
    // 0x1495ec: 0x0  nop
    ctx->pc = 0x1495ecu;
    // NOP
    // 0x1495f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1495f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1495f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1495f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1495f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1495f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1495fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1495fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x149600: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x149600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149604: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x149604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149608: 0xc0852e4  jal         func_214B90
    ctx->pc = 0x149608u;
    SET_GPR_U32(ctx, 31, 0x149610u);
    ctx->pc = 0x214B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B90u, 0x149608u, 0x149610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149610u;
label_149610:
    // 0x149610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149614: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x149614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149618: 0x3e00008  jr          $ra
    ctx->pc = 0x149618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149620u;
    // 0x149620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14962c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14962cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149630: 0xc0852f0  jal         func_214BC0
    ctx->pc = 0x149630u;
    SET_GPR_U32(ctx, 31, 0x149638u);
    ctx->pc = 0x214BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214BC0u, 0x149630u, 0x149638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149638u;
label_149638:
    // 0x149638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14963c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14963cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149640: 0x3e00008  jr          $ra
    ctx->pc = 0x149640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149648u;
    // 0x149648: 0x0  nop
    ctx->pc = 0x149648u;
    // NOP
    // 0x14964c: 0x0  nop
    ctx->pc = 0x14964cu;
    // NOP
    ctx->pc = 0x149650u;
}
