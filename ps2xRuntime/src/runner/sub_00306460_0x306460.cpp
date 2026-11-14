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

// Function: sub_00306460
// Address: 0x306460 - 0x306528
void sub_00306460_0x306460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306460_0x306460");
#endif

    switch (ctx->pc) {
        case 0x30649cu: goto label_30649c;
        case 0x3064b4u: goto label_3064b4;
        case 0x3064c8u: goto label_3064c8;
        case 0x306518u: goto label_306518;
        default: break;
    }

    ctx->pc = 0x306460u;

    // 0x306460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x306460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x306464: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x306464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x306468: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x306468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x30646c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x30646cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x306470: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x306470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x306474: 0x24530b6c  addiu       $s3, $v0, 0xB6C
    ctx->pc = 0x306474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2924));
    // 0x306478: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x306478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30647c: 0x24712f28  addiu       $s1, $v1, 0x2F28
    ctx->pc = 0x30647cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12072));
    // 0x306480: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x306480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x306484: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x306484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x306488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30648c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30648cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306490: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x306490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306494: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x306494u;
    SET_GPR_U32(ctx, 31, 0x30649Cu);
    ctx->pc = 0x306498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306494u;
    // 0x306498: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x306494u, 0x30649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30649Cu;
label_30649c:
    // 0x30649c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30649Cu;
    {
        const bool branch_taken_0x30649c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30649Cu;
        // 0x3064a0: 0x3c10004f  lui         $s0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30649c) {
            ctx->pc = 0x3064CCu;
            goto label_3064cc;
        }
    }
    ctx->pc = 0x3064A4u;
    // 0x3064a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3064a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064a8: 0x8e050c44  lw          $a1, 0xC44($s0)
    ctx->pc = 0x3064a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3140)));
    // 0x3064ac: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3064ACu;
    SET_GPR_U32(ctx, 31, 0x3064B4u);
    ctx->pc = 0x3064B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064ACu;
    // 0x3064b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3064ACu, 0x3064B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064B4u;
label_3064b4:
    // 0x3064b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3064B4u;
    {
        const bool branch_taken_0x3064b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064B4u;
        // 0x3064b8: 0x8e050c44  lw          $a1, 0xC44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064b4) {
            ctx->pc = 0x3064CCu;
            goto label_3064cc;
        }
    }
    ctx->pc = 0x3064BCu;
    // 0x3064bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3064bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064c0: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3064C0u;
    SET_GPR_U32(ctx, 31, 0x3064C8u);
    ctx->pc = 0x3064C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064C0u;
    // 0x3064c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3064C0u, 0x3064C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064C8u;
label_3064c8:
    // 0x3064c8: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x3064c8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3064cc:
    // 0x3064cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3064ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3064d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3064d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3064d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3064d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3064d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3064dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3064dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3064e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3064e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3064e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3064E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3064E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064E4u;
        // 0x3064e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3064E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3064ECu;
    // 0x3064ec: 0x0  nop
    ctx->pc = 0x3064ecu;
    // NOP
    // 0x3064f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3064f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3064f4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3064f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3064f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3064f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3064fc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3064fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x306500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306504: 0x24842f28  addiu       $a0, $a0, 0x2F28
    ctx->pc = 0x306504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12072));
    // 0x306508: 0xac430c40  sw          $v1, 0xC40($v0)
    ctx->pc = 0x306508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4F0C40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F0C40u, _value); } while (0);
    // 0x30650c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30650cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306510: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x306510u;
    SET_GPR_U32(ctx, 31, 0x306518u);
    ctx->pc = 0x306514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306510u;
    // 0x306514: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x306510u, 0x306518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306518u;
label_306518:
    // 0x306518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30651c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30651cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306520: 0x3e00008  jr          $ra
    ctx->pc = 0x306520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306520u;
        // 0x306524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306528u;
}
