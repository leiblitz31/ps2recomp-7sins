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

// Function: sub_00101110
// Address: 0x101110 - 0x101220
void sub_00101110_0x101110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101110_0x101110");
#endif

    switch (ctx->pc) {
        case 0x10112cu: goto label_10112c;
        case 0x101140u: goto label_101140;
        case 0x101154u: goto label_101154;
        case 0x101168u: goto label_101168;
        case 0x10117cu: goto label_10117c;
        case 0x101190u: goto label_101190;
        case 0x1011a4u: goto label_1011a4;
        case 0x1011b8u: goto label_1011b8;
        case 0x1011ccu: goto label_1011cc;
        case 0x1011e0u: goto label_1011e0;
        case 0x1011f4u: goto label_1011f4;
        case 0x101208u: goto label_101208;
        default: break;
    }

    ctx->pc = 0x101110u;

    // 0x101110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101118: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x101118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x10111c: 0x24841140  addiu       $a0, $a0, 0x1140
    ctx->pc = 0x10111cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4416));
    // 0x101120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101124: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x101124u;
    SET_GPR_U32(ctx, 31, 0x10112Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x101124u, 0x10112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10112Cu;
label_10112c:
    // 0x10112c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x10112cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x101130: 0x24841190  addiu       $a0, $a0, 0x1190
    ctx->pc = 0x101130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4496));
    // 0x101134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101138: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x101138u;
    SET_GPR_U32(ctx, 31, 0x101140u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x101138u, 0x101140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101140u;
label_101140:
    // 0x101140: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x101140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x101144: 0x248411a8  addiu       $a0, $a0, 0x11A8
    ctx->pc = 0x101144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4520));
    // 0x101148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10114c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x10114Cu;
    SET_GPR_U32(ctx, 31, 0x101154u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x10114Cu, 0x101154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101154u;
label_101154:
    // 0x101154: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x101154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x101158: 0x248411b8  addiu       $a0, $a0, 0x11B8
    ctx->pc = 0x101158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4536));
    // 0x10115c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10115cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101160: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x101160u;
    SET_GPR_U32(ctx, 31, 0x101168u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x101160u, 0x101168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101168u;
label_101168:
    // 0x101168: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x101168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x10116c: 0x248411c8  addiu       $a0, $a0, 0x11C8
    ctx->pc = 0x10116cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4552));
    // 0x101170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101174: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x101174u;
    SET_GPR_U32(ctx, 31, 0x10117Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x101174u, 0x10117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10117Cu;
label_10117c:
    // 0x10117c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x10117cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x101180: 0x248411d8  addiu       $a0, $a0, 0x11D8
    ctx->pc = 0x101180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4568));
    // 0x101184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101188: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x101188u;
    SET_GPR_U32(ctx, 31, 0x101190u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x101188u, 0x101190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101190u;
label_101190:
    // 0x101190: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x101190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x101194: 0x248411e8  addiu       $a0, $a0, 0x11E8
    ctx->pc = 0x101194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4584));
    // 0x101198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10119c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x10119Cu;
    SET_GPR_U32(ctx, 31, 0x1011A4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x10119Cu, 0x1011A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011A4u;
label_1011a4:
    // 0x1011a4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1011a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1011a8: 0x248411f8  addiu       $a0, $a0, 0x11F8
    ctx->pc = 0x1011a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4600));
    // 0x1011ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1011acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1011b0: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1011B0u;
    SET_GPR_U32(ctx, 31, 0x1011B8u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1011B0u, 0x1011B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011B8u;
label_1011b8:
    // 0x1011b8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1011b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1011bc: 0x24841210  addiu       $a0, $a0, 0x1210
    ctx->pc = 0x1011bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4624));
    // 0x1011c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1011c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1011c4: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1011C4u;
    SET_GPR_U32(ctx, 31, 0x1011CCu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1011C4u, 0x1011CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011CCu;
label_1011cc:
    // 0x1011cc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1011ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1011d0: 0x24841220  addiu       $a0, $a0, 0x1220
    ctx->pc = 0x1011d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
    // 0x1011d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1011d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1011d8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1011D8u;
    SET_GPR_U32(ctx, 31, 0x1011E0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1011D8u, 0x1011E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011E0u;
label_1011e0:
    // 0x1011e0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1011e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1011e4: 0x24841230  addiu       $a0, $a0, 0x1230
    ctx->pc = 0x1011e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4656));
    // 0x1011e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1011e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1011ec: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1011ECu;
    SET_GPR_U32(ctx, 31, 0x1011F4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1011ECu, 0x1011F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011F4u;
label_1011f4:
    // 0x1011f4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1011f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1011f8: 0x24841240  addiu       $a0, $a0, 0x1240
    ctx->pc = 0x1011f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4672));
    // 0x1011fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1011fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101200: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x101200u;
    SET_GPR_U32(ctx, 31, 0x101208u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x101200u, 0x101208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101208u;
label_101208:
    // 0x101208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10120c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10120cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x101210: 0x3e00008  jr          $ra
    ctx->pc = 0x101210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101218u;
    // 0x101218: 0x0  nop
    ctx->pc = 0x101218u;
    // NOP
    // 0x10121c: 0x0  nop
    ctx->pc = 0x10121cu;
    // NOP
    ctx->pc = 0x101220u;
}
