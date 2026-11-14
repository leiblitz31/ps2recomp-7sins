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

// Function: entry_306938
// Address: 0x306938 - 0x3069c8
void entry_306938_0x3069c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_306938_0x3069c8");
#endif

    switch (ctx->pc) {
        case 0x306950u: goto label_306950;
        case 0x306960u: goto label_306960;
        case 0x3069a4u: goto label_3069a4;
        default: break;
    }

    ctx->pc = 0x306938u;

    // 0x306938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x306938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30693c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x30693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x306940: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x306940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x306944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306948: 0xc0c18d8  jal         func_306360
    ctx->pc = 0x306948u;
    SET_GPR_U32(ctx, 31, 0x306950u);
    ctx->pc = 0x30694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306948u;
    // 0x30694c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306360u, 0x306948u, 0x306950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306950u;
label_306950:
    // 0x306950: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x306950u;
    {
        const bool branch_taken_0x306950 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x306954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306950u;
        // 0x306954: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306950) {
            ctx->pc = 0x3069B4u;
            goto label_3069b4;
        }
    }
    ctx->pc = 0x306958u;
    // 0x306958: 0xc0c1918  jal         func_306460
    ctx->pc = 0x306958u;
    SET_GPR_U32(ctx, 31, 0x306960u);
    ctx->pc = 0x306460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306460u, 0x306958u, 0x306960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306960u;
label_306960:
    // 0x306960: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x306960u;
    {
        const bool branch_taken_0x306960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306960u;
        // 0x306964: 0x3c100061  lui         $s0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306960) {
            ctx->pc = 0x306974u;
            goto label_306974;
        }
    }
    ctx->pc = 0x306968u;
    // 0x306968: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x306968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x30696c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x30696Cu;
    {
        const bool branch_taken_0x30696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30696Cu;
        // 0x306970: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30696c) {
            ctx->pc = 0x3069B4u;
            goto label_3069b4;
        }
    }
    ctx->pc = 0x306974u;
label_306974:
    // 0x306974: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x306974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x306978: 0x26072d00  addiu       $a3, $s0, 0x2D00
    ctx->pc = 0x306978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 11520));
    // 0x30697c: 0xae112d00  sw          $s1, 0x2D00($s0)
    ctx->pc = 0x30697cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11520), GPR_U32(ctx, 17));
    // 0x306980: 0x24842f00  addiu       $a0, $a0, 0x2F00
    ctx->pc = 0x306980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12032));
    // 0x306984: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x306984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x306988: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x306988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30698c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30698cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306990: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x306990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306994: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x306994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306998: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x306998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30699c: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x30699Cu;
    SET_GPR_U32(ctx, 31, 0x3069A4u);
    ctx->pc = 0x3069A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30699Cu;
    // 0x3069a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x30699Cu, 0x3069A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3069A4u;
label_3069a4:
    // 0x3069a4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3069A4u;
    {
        const bool branch_taken_0x3069a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3069a4) {
            ctx->pc = 0x3069A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3069A4u;
            // 0x3069a8: 0x8e022d00  lw          $v0, 0x2D00($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3069B4u;
            goto label_3069b4;
        }
    }
    ctx->pc = 0x3069ACu;
    // 0x3069ac: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3069acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3069b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3069b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3069b4:
    // 0x3069b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3069b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3069b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3069b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3069bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3069bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3069c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3069C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3069C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069C0u;
        // 0x3069c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3069C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3069C8u;
}
