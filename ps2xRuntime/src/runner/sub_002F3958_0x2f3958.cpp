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

// Function: sub_002F3958
// Address: 0x2f3958 - 0x2f3a10
void sub_002F3958_0x2f3958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3958_0x2f3958");
#endif

    switch (ctx->pc) {
        case 0x2f39bcu: goto label_2f39bc;
        case 0x2f39d0u: goto label_2f39d0;
        default: break;
    }

    ctx->pc = 0x2f3958u;

    // 0x2f3958: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x2f3958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x2f395c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x2f395cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f3960: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x2f3960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x2f3964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3968: 0xffb10468  sd          $s1, 0x468($sp)
    ctx->pc = 0x2f3968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 17));
    // 0x2f396c: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x2f396cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f3970: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x2f3970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
    // 0x2f3974: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f3974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3978: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x2f3978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x2f397c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2f397cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f3980: 0x9609000e  lhu         $t1, 0xE($s0)
    ctx->pc = 0x2f3980u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2f3984: 0x8e080054  lw          $t0, 0x54($s0)
    ctx->pc = 0x2f3984u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2f3988: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2f3988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x2f398c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2f398cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2f3990: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x2f3990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2f3994: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x2f3994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x2f3998: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x2f3998u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f399c: 0xa7a9000e  sh          $t1, 0xE($sp)
    ctx->pc = 0x2f399cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x2f39a0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x2f39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x2f39a4: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x2f39a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x2f39a8: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x2f39a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x2f39ac: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x2f39acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x2f39b0: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x2f39b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x2f39b4: 0xc0bce84  jal         func_2F3A10
    ctx->pc = 0x2F39B4u;
    SET_GPR_U32(ctx, 31, 0x2F39BCu);
    ctx->pc = 0x2F39B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39B4u;
    // 0x2f39b8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3A10u, 0x2F39B4u, 0x2F39BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39BCu;
label_2f39bc:
    // 0x2f39bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f39bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f39c0: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F39C0u;
    {
        const bool branch_taken_0x2f39c0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2F39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39C0u;
        // 0x2f39c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39c0) {
            ctx->pc = 0x2F39D8u;
            goto label_2f39d8;
        }
    }
    ctx->pc = 0x2F39C8u;
    // 0x2f39c8: 0xc0baea4  jal         func_2EBA90
    ctx->pc = 0x2F39C8u;
    SET_GPR_U32(ctx, 31, 0x2F39D0u);
    ctx->pc = 0x2EBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBA90u, 0x2F39C8u, 0x2F39D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39D0u;
label_2f39d0:
    // 0x2f39d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f39d4: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x2f39d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2f39d8:
    // 0x2f39d8: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x2f39d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f39dc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2f39dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2f39e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F39E0u;
    {
        const bool branch_taken_0x2f39e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39E0u;
        // 0x2f39e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39e0) {
            ctx->pc = 0x2F39F8u;
            goto label_2f39f8;
        }
    }
    ctx->pc = 0x2F39E8u;
    // 0x2f39e8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2f39e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f39ec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2f39ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2f39f0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2f39f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f39f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f39f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f39f8:
    // 0x2f39f8: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x2f39f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2f39fc: 0xdfb10468  ld          $s1, 0x468($sp)
    ctx->pc = 0x2f39fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x2f3a00: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x2f3a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2f3a04: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A04u;
        // 0x2f3a08: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3A0Cu;
    // 0x2f3a0c: 0x0  nop
    ctx->pc = 0x2f3a0cu;
    // NOP
    ctx->pc = 0x2f3a10u;
}
