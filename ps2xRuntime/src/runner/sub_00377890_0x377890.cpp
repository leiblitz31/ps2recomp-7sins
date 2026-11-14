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

// Function: sub_00377890
// Address: 0x377890 - 0x3778f0
void sub_00377890_0x377890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377890_0x377890");
#endif

    switch (ctx->pc) {
        case 0x377890u: goto label_377890;
        case 0x377894u: goto label_377894;
        case 0x377898u: goto label_377898;
        case 0x37789cu: goto label_37789c;
        case 0x3778a0u: goto label_3778a0;
        case 0x3778a4u: goto label_3778a4;
        case 0x3778a8u: goto label_3778a8;
        case 0x3778acu: goto label_3778ac;
        case 0x3778b0u: goto label_3778b0;
        case 0x3778b4u: goto label_3778b4;
        case 0x3778b8u: goto label_3778b8;
        case 0x3778bcu: goto label_3778bc;
        case 0x3778c0u: goto label_3778c0;
        case 0x3778c4u: goto label_3778c4;
        case 0x3778c8u: goto label_3778c8;
        case 0x3778ccu: goto label_3778cc;
        case 0x3778d0u: goto label_3778d0;
        case 0x3778d4u: goto label_3778d4;
        case 0x3778d8u: goto label_3778d8;
        case 0x3778dcu: goto label_3778dc;
        case 0x3778e0u: goto label_3778e0;
        case 0x3778e4u: goto label_3778e4;
        case 0x3778e8u: goto label_3778e8;
        case 0x3778ecu: goto label_3778ec;
        default: break;
    }

    ctx->pc = 0x377890u;

label_377890:
    // 0x377890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_377894:
    // 0x377894: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_377898:
    // 0x377898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37789c:
    // 0x37789c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37789cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3778a0:
    // 0x3778a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3778a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3778a4:
    // 0x3778a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3778a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3778a8:
    // 0x3778a8: 0x8c51c430  lw          $s1, -0x3BD0($v0)
    ctx->pc = 0x3778a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951984)));
label_3778ac:
    // 0x3778ac: 0x2442c430  addiu       $v0, $v0, -0x3BD0
    ctx->pc = 0x3778acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_3778b0:
    // 0x3778b0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x3778b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3778b4:
    // 0x3778b4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3778b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3778b8:
    // 0x3778b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3778b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3778bc:
    // 0x3778bc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3778bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3778c0:
    // 0x3778c0: 0x40f809  jalr        $v0
label_3778c4:
    if (ctx->pc == 0x3778C4u) {
        ctx->pc = 0x3778C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778C0u;
        // 0x3778c4: 0x2465001c  addiu       $a1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3778C8u;
        goto label_3778c8;
    }
    ctx->pc = 0x3778C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3778C8u);
        ctx->pc = 0x3778C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778C0u;
        // 0x3778c4: 0x2465001c  addiu       $a1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3778C0u, 0x3778C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3778C8u;
label_3778c8:
    // 0x3778c8: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_3778cc:
    if (ctx->pc == 0x3778CCu) {
        ctx->pc = 0x3778CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778C8u;
        // 0x3778cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3778D0u;
        goto label_3778d0;
    }
    ctx->pc = 0x3778C8u;
    {
        const bool branch_taken_0x3778c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3778CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778C8u;
        // 0x3778cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3778c8) {
            ctx->pc = 0x3778E0u;
            goto label_3778e0;
        }
    }
    ctx->pc = 0x3778D0u;
label_3778d0:
    // 0x3778d0: 0xc0ddc3e  jal         func_3770F8
label_3778d4:
    if (ctx->pc == 0x3778D4u) {
        ctx->pc = 0x3778D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778D0u;
        // 0x3778d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3778D8u;
        goto label_3778d8;
    }
    ctx->pc = 0x3778D0u;
    SET_GPR_U32(ctx, 31, 0x3778D8u);
    ctx->pc = 0x3778D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3778D0u;
    // 0x3778d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3770F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3770F8u, 0x3778D0u, 0x3778D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3778D8u;
label_3778d8:
    // 0x3778d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3778d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3778dc:
    // 0x3778dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3778dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3778e0:
    // 0x3778e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3778e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3778e4:
    // 0x3778e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3778e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3778e8:
    // 0x3778e8: 0x3e00008  jr          $ra
label_3778ec:
    if (ctx->pc == 0x3778ECu) {
        ctx->pc = 0x3778ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778E8u;
        // 0x3778ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3778F0u;
        goto label_fallthrough_0x3778e8;
    }
    ctx->pc = 0x3778E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3778ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778E8u;
        // 0x3778ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3778E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3778e8:
    ctx->pc = 0x3778F0u;
}
