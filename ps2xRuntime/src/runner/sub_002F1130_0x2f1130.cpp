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

// Function: sub_002F1130
// Address: 0x2f1130 - 0x2f11b0
void sub_002F1130_0x2f1130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1130_0x2f1130");
#endif

    switch (ctx->pc) {
        case 0x2f1170u: goto label_2f1170;
        case 0x2f1190u: goto label_2f1190;
        default: break;
    }

    ctx->pc = 0x2f1130u;

    // 0x2f1130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f1138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f113c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f1140: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f1140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1144: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f1144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f1148: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f1148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f114c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f1150: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2f1150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f1154: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2f1154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2f1158: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1158u;
    {
        const bool branch_taken_0x2f1158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1158u;
        // 0x2f115c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1158) {
            ctx->pc = 0x2F1170u;
            goto label_2f1170;
        }
    }
    ctx->pc = 0x2F1160u;
    // 0x2f1160: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2f1160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2f1164: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2f1164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1168: 0xc0bb416  jal         func_2ED058
    ctx->pc = 0x2F1168u;
    SET_GPR_U32(ctx, 31, 0x2F1170u);
    ctx->pc = 0x2F116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1168u;
    // 0x2f116c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED058u, 0x2F1168u, 0x2F1170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1170u;
label_2f1170:
    // 0x2f1170: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2f1170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f1174: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f1174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1178: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x2f1178u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2f117c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f117cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1180: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x2f1180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x2f1184: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2f1184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2f1188: 0xc0bd8ac  jal         func_2F62B0
    ctx->pc = 0x2F1188u;
    SET_GPR_U32(ctx, 31, 0x2F1190u);
    ctx->pc = 0x2F118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1188u;
    // 0x2f118c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F62B0u, 0x2F1188u, 0x2F1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1190u;
label_2f1190:
    // 0x2f1190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1194: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f1194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f1198: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f1198u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f119c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f119cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f11a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f11a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f11a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f11a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f11a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F11A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11A8u;
        // 0x2f11ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F11A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F11B0u;
}
