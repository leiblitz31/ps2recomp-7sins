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

// Function: sub_00449050
// Address: 0x449050 - 0x4490c0
void sub_00449050_0x449050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449050_0x449050");
#endif

    switch (ctx->pc) {
        case 0x4490a0u: goto label_4490a0;
        case 0x4490acu: goto label_4490ac;
        default: break;
    }

    ctx->pc = 0x449050u;

    // 0x449050: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x449050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x449054: 0x8f85af30  lw          $a1, -0x50D0($gp)
    ctx->pc = 0x449054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946608)));
    // 0x449058: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x449058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x44905c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x44905cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x449060: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x449060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x449064: 0x8f83af34  lw          $v1, -0x50CC($gp)
    ctx->pc = 0x449064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946612)));
    // 0x449068: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x449068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x44906c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44906cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x449070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x449070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x449074: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x449074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x449078: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x449078u;
    {
        const bool branch_taken_0x449078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449078u;
        // 0x44907c: 0xaf82af30  sw          $v0, -0x50D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449078) {
            ctx->pc = 0x4490B0u;
            goto label_4490b0;
        }
    }
    ctx->pc = 0x449080u;
    // 0x449080: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x449080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x449084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x449084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449088: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x449088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x44908c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x44908cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x449090: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x449090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449094: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x449094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    // 0x449098: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x449098u;
    SET_GPR_U32(ctx, 31, 0x4490A0u);
    ctx->pc = 0x44909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449098u;
    // 0x44909c: 0xaf82af30  sw          $v0, -0x50D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x449098u, 0x4490A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4490A0u;
label_4490a0:
    // 0x4490a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4490a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4490a4: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x4490A4u;
    SET_GPR_U32(ctx, 31, 0x4490ACu);
    ctx->pc = 0x4490A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4490A4u;
    // 0x4490a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4490A4u, 0x4490ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4490ACu;
label_4490ac:
    // 0x4490ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4490acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4490b0:
    // 0x4490b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4490b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4490b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4490B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4490B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4490B4u;
        // 0x4490b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4490B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4490BCu;
    // 0x4490bc: 0x0  nop
    ctx->pc = 0x4490bcu;
    // NOP
    ctx->pc = 0x4490c0u;
}
