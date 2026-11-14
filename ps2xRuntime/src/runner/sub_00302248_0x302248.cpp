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

// Function: sub_00302248
// Address: 0x302248 - 0x3022c8
void sub_00302248_0x302248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302248_0x302248");
#endif

    switch (ctx->pc) {
        case 0x302264u: goto label_302264;
        case 0x30226cu: goto label_30226c;
        case 0x302288u: goto label_302288;
        case 0x3022acu: goto label_3022ac;
        default: break;
    }

    ctx->pc = 0x302248u;

    // 0x302248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30224c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x30224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x302250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x302250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302254: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x302254u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    // 0x302258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30225c: 0xc0c0876  jal         func_3021D8
    ctx->pc = 0x30225Cu;
    SET_GPR_U32(ctx, 31, 0x302264u);
    ctx->pc = 0x302260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30225Cu;
    // 0x302260: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3021D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3021D8u, 0x30225Cu, 0x302264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302264u;
label_302264:
    // 0x302264: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x302264u;
    SET_GPR_U32(ctx, 31, 0x30226Cu);
    ctx->pc = 0x302268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302264u;
    // 0x302268: 0x8e240c28  lw          $a0, 0xC28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x302264u, 0x30226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30226Cu;
label_30226c:
    // 0x30226c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x30226cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x302270: 0x24652840  addiu       $a1, $v1, 0x2840
    ctx->pc = 0x302270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x302274: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x302274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x302278: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x302278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30227c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30227Cu;
    {
        const bool branch_taken_0x30227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30227Cu;
        // 0x302280: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30227c) {
            ctx->pc = 0x3022A4u;
            goto label_3022a4;
        }
    }
    ctx->pc = 0x302284u;
    // 0x302284: 0x0  nop
    ctx->pc = 0x302284u;
    // NOP
label_302288:
    // 0x302288: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x302288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x30228c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x30228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x302290: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x302290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x302294: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x302294u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x302298: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x302298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x30229c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30229Cu;
    {
        const bool branch_taken_0x30229c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30229c) {
            ctx->pc = 0x302288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302288;
        }
    }
    ctx->pc = 0x3022A4u;
label_3022a4:
    // 0x3022a4: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x3022A4u;
    SET_GPR_U32(ctx, 31, 0x3022ACu);
    ctx->pc = 0x3022A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022A4u;
    // 0x3022a8: 0x8e240c28  lw          $a0, 0xC28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3022A4u, 0x3022ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3022ACu;
label_3022ac:
    // 0x3022ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3022acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3022b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3022b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3022b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3022b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3022b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3022b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3022bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3022BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3022C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3022BCu;
        // 0x3022c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3022BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3022C4u;
    // 0x3022c4: 0x0  nop
    ctx->pc = 0x3022c4u;
    // NOP
    ctx->pc = 0x3022c8u;
}
