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

// Function: sub_004A5188
// Address: 0x4a5188 - 0x4a5240
void sub_004A5188_0x4a5188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5188_0x4a5188");
#endif

    switch (ctx->pc) {
        case 0x4a51b8u: goto label_4a51b8;
        case 0x4a51e0u: goto label_4a51e0;
        case 0x4a51f0u: goto label_4a51f0;
        default: break;
    }

    ctx->pc = 0x4a5188u;

    // 0x4a5188: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x4a5188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x4a518c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4a518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a5190: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4a5190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4a5194: 0x24a5001e  addiu       $a1, $a1, 0x1E
    ctx->pc = 0x4a5194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x4a5198: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4a5198u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x4a519c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x4a519cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x4a51a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a51a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a51a4: 0x18a00024  blez        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x4A51A4u;
    {
        const bool branch_taken_0x4a51a4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4A51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A51A4u;
        // 0x4a51a8: 0x55840  sll         $t3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a51a4) {
            ctx->pc = 0x4A5238u;
            goto label_4a5238;
        }
    }
    ctx->pc = 0x4A51ACu;
    // 0x4a51ac: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x4a51acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a51b0: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0x4a51b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a51b4: 0x0  nop
    ctx->pc = 0x4a51b4u;
    // NOP
label_4a51b8:
    // 0x4a51b8: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x4a51b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a51bc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4a51bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4a51c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a51c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a51c4: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x4a51c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x4a51c8: 0x310300f0  andi        $v1, $t0, 0xF0
    ctx->pc = 0x4a51c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)240);
    // 0x4a51cc: 0x1821023  subu        $v0, $t4, $v0
    ctx->pc = 0x4a51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4a51d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a51d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a51d4: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x4a51d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4a51d8: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x4a51d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x4a51dc: 0x0  nop
    ctx->pc = 0x4a51dcu;
    // NOP
label_4a51e0:
    // 0x4a51e0: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x4a51e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a51e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a51e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a51e8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x4a51e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a51ec: 0x0  nop
    ctx->pc = 0x4a51ecu;
    // NOP
label_4a51f0:
    // 0x4a51f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4a51f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a51f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4a51f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4a51f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4a51f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4a51fc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x4a51fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x4a5200: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x4a5200u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x4a5204: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a5204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4a5208: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a5208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a520c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x4a520cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a5210: 0x4e1fff7  bgez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A5210u;
    {
        const bool branch_taken_0x4a5210 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x4A5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5210u;
        // 0x4a5214: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5210) {
            ctx->pc = 0x4A51F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a51f0;
        }
    }
    ctx->pc = 0x4A5218u;
    // 0x4a5218: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4a5218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a521c: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x4a521cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a5220: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4A5220u;
    {
        const bool branch_taken_0x4a5220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5220) {
            ctx->pc = 0x4A5224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5220u;
            // 0x4a5224: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A51E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a51e0;
        }
    }
    ctx->pc = 0x4A5228u;
    // 0x4a5228: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x4a5228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a522c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x4a522cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4a5230: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4A5230u;
    {
        const bool branch_taken_0x4a5230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5230) {
            ctx->pc = 0x4A5234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5230u;
            // 0x4a5234: 0x90880000  lbu         $t0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A51B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a51b8;
        }
    }
    ctx->pc = 0x4A5238u;
label_4a5238:
    // 0x4a5238: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5238u;
        // 0x4a523c: 0xb10c0  sll         $v0, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5240u;
}
