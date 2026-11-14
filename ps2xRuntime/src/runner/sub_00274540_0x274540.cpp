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

// Function: sub_00274540
// Address: 0x274540 - 0x274630
void sub_00274540_0x274540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274540_0x274540");
#endif

    switch (ctx->pc) {
        case 0x27458cu: goto label_27458c;
        case 0x2745ccu: goto label_2745cc;
        case 0x2745dcu: goto label_2745dc;
        case 0x2745f4u: goto label_2745f4;
        case 0x274614u: goto label_274614;
        default: break;
    }

    ctx->pc = 0x274540u;

    // 0x274540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27454c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27454cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x274550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274554: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x274554u;
    {
        const bool branch_taken_0x274554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274554) {
            ctx->pc = 0x274614u;
            goto label_274614;
        }
    }
    ctx->pc = 0x27455Cu;
    // 0x27455c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27455cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x274560: 0x24635b10  addiu       $v1, $v1, 0x5B10
    ctx->pc = 0x274560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23312));
    // 0x274564: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274568: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x274568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27456c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27456cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274570: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x274570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x274574: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x274574u;
    {
        const bool branch_taken_0x274574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274574) {
            ctx->pc = 0x2745E4u;
            goto label_2745e4;
        }
    }
    ctx->pc = 0x27457Cu;
    // 0x27457c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274580: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x274580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x274584: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x274584u;
    SET_GPR_U32(ctx, 31, 0x27458Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x274584u, 0x27458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27458Cu;
label_27458c:
    // 0x27458c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x27458cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x274590: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x274590u;
    {
        const bool branch_taken_0x274590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x274590) {
            ctx->pc = 0x2745ACu;
            goto label_2745ac;
        }
    }
    ctx->pc = 0x274598u;
    // 0x274598: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27459c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x27459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2745a0: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x2745a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2745a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2745A4u;
    {
        const bool branch_taken_0x2745a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2745a4) {
            ctx->pc = 0x2745E4u;
            goto label_2745e4;
        }
    }
    ctx->pc = 0x2745ACu;
label_2745ac:
    // 0x2745ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2745acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2745b0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2745b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2745b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2745B4u;
    {
        const bool branch_taken_0x2745b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2745b4) {
            ctx->pc = 0x2745E4u;
            goto label_2745e4;
        }
    }
    ctx->pc = 0x2745BCu;
    // 0x2745bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2745bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2745c0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2745c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2745c4: 0xc099928  jal         func_2664A0
    ctx->pc = 0x2745C4u;
    SET_GPR_U32(ctx, 31, 0x2745CCu);
    ctx->pc = 0x2664A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664A0u, 0x2745C4u, 0x2745CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745CCu;
label_2745cc:
    // 0x2745cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2745ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2745d0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2745d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2745d4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2745D4u;
    SET_GPR_U32(ctx, 31, 0x2745DCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2745D4u, 0x2745DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745DCu;
label_2745dc:
    // 0x2745dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2745dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2745e0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2745e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_2745e4:
    // 0x2745e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2745e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2745e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2745e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745ec: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x2745ECu;
    SET_GPR_U32(ctx, 31, 0x2745F4u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x2745ECu, 0x2745F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745F4u;
label_2745f4:
    // 0x2745f4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2745f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2745f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2745f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2745fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2745fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x274600: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274600u;
    {
        const bool branch_taken_0x274600 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x274600) {
            ctx->pc = 0x274614u;
            goto label_274614;
        }
    }
    ctx->pc = 0x274608u;
    // 0x274608: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x274608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27460c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x27460Cu;
    SET_GPR_U32(ctx, 31, 0x274614u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x27460Cu, 0x274614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274614u;
label_274614:
    // 0x274614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27461c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27461cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x274620: 0x3e00008  jr          $ra
    ctx->pc = 0x274620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274628u;
    // 0x274628: 0x0  nop
    ctx->pc = 0x274628u;
    // NOP
    // 0x27462c: 0x0  nop
    ctx->pc = 0x27462cu;
    // NOP
    ctx->pc = 0x274630u;
}
