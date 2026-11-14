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

// Function: sub_003DC1A0
// Address: 0x3dc1a0 - 0x3dc250
void sub_003DC1A0_0x3dc1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC1A0_0x3dc1a0");
#endif

    switch (ctx->pc) {
        case 0x3dc200u: goto label_3dc200;
        default: break;
    }

    ctx->pc = 0x3dc1a0u;

    // 0x3dc1a0: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3dc1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3dc1a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3dc1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc1a8: 0x30470003  andi        $a3, $v0, 0x3
    ctx->pc = 0x3dc1a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3dc1ac: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DC1ACu;
    {
        const bool branch_taken_0x3dc1ac = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3DC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1ACu;
        // 0x3dc1b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc1ac) {
            ctx->pc = 0x3DC1F4u;
            goto label_3dc1f4;
        }
    }
    ctx->pc = 0x3DC1B4u;
    // 0x3dc1b4: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DC1B4u;
    {
        const bool branch_taken_0x3dc1b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1B4u;
        // 0x3dc1b8: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc1b4) {
            ctx->pc = 0x3DC204u;
            goto label_3dc204;
        }
    }
    ctx->pc = 0x3DC1BCu;
    // 0x3dc1bc: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3dc1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3dc1c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DC1C0u;
    {
        const bool branch_taken_0x3dc1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1C0u;
        // 0x3dc1c4: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc1c0) {
            ctx->pc = 0x3DC1F4u;
            goto label_3dc1f4;
        }
    }
    ctx->pc = 0x3DC1C8u;
    // 0x3dc1c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DC1C8u;
    {
        const bool branch_taken_0x3dc1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1C8u;
        // 0x3dc1cc: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc1c8) {
            ctx->pc = 0x3DC1E4u;
            goto label_3dc1e4;
        }
    }
    ctx->pc = 0x3DC1D0u;
    // 0x3dc1d0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3dc1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3dc1d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3dc1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3dc1d8: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x3dc1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3dc1dc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dc1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3dc1e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3dc1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3dc1e4:
    // 0x3dc1e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3dc1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3dc1e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dc1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dc1ec: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x3dc1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3dc1f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3dc1f4:
    // 0x3dc1f4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3dc1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3dc1f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3DC1F8u;
    {
        const bool branch_taken_0x3dc1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1F8u;
        // 0x3dc1fc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc1f8) {
            ctx->pc = 0x3DC238u;
            goto label_3dc238;
        }
    }
    ctx->pc = 0x3DC200u;
label_3dc200:
    // 0x3dc200: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3dc200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3dc204:
    // 0x3dc204: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x3dc204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x3dc208: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dc208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dc20c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x3dc20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3dc210: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3dc210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3dc214: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dc214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3dc218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dc218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dc21c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x3dc21cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3dc220: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3dc220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3dc224: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dc224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3dc228: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dc228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dc22c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x3dc22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3dc230: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3dc230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3dc234: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dc234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3dc238:
    // 0x3dc238: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dc238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dc23c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x3dc23cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3dc240: 0x1cc0ffef  bgtz        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3DC240u;
    {
        const bool branch_taken_0x3dc240 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3DC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC240u;
        // 0x3dc244: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc240) {
            ctx->pc = 0x3DC200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc200;
        }
    }
    ctx->pc = 0x3DC248u;
    // 0x3dc248: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC248u;
        // 0x3dc24c: 0x31042  srl         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC250u;
}
