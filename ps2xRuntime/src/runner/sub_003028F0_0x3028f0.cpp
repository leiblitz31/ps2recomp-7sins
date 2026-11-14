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

// Function: sub_003028F0
// Address: 0x3028f0 - 0x3029a0
void sub_003028F0_0x3028f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003028F0_0x3028f0");
#endif

    switch (ctx->pc) {
        case 0x302900u: goto label_302900;
        case 0x302934u: goto label_302934;
        case 0x30294cu: goto label_30294c;
        case 0x302954u: goto label_302954;
        case 0x302974u: goto label_302974;
        case 0x30297cu: goto label_30297c;
        default: break;
    }

    ctx->pc = 0x3028f0u;

label_3028f0:
    // 0x3028f0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3028f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3028f4: 0x80bf6e0  j           func_2FDB80
    ctx->pc = 0x3028F4u;
    ctx->pc = 0x3028F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3028F4u;
    // 0x3028f8: 0x8c440c24  lw          $a0, 0xC24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    sub_002FDB80_0x2fdb80(rdram, ctx, runtime); return;
    ctx->pc = 0x3028FCu;
    // 0x3028fc: 0x0  nop
    ctx->pc = 0x3028fcu;
    // NOP
label_302900:
    // 0x302900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x302900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x302904: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x302904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x302908: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x302908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30290c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30290cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302910: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x302910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x302914: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x302914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x302918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30291c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x30291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x302920: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x302920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x302924: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x302924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x302928: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x302928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x30292c: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x30292Cu;
    SET_GPR_U32(ctx, 31, 0x302934u);
    ctx->pc = 0x302930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30292Cu;
    // 0x302930: 0x26142ac0  addiu       $s4, $s0, 0x2AC0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 10944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x30292Cu, 0x302934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302934u;
label_302934:
    // 0x302934: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x302934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x302938: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x302938u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x30293c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30293Cu;
    {
        const bool branch_taken_0x30293c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30293c) {
            ctx->pc = 0x30294Cu;
            goto label_30294c;
        }
    }
    ctx->pc = 0x302944u;
    // 0x302944: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x302944u;
    SET_GPR_U32(ctx, 31, 0x30294Cu);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x302944u, 0x30294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30294Cu;
label_30294c:
    // 0x30294c: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x30294Cu;
    SET_GPR_U32(ctx, 31, 0x302954u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x30294Cu, 0x302954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302954u;
label_302954:
    // 0x302954: 0x8e112ac0  lw          $s1, 0x2AC0($s0)
    ctx->pc = 0x302954u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x302958: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x302958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x30295c: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x30295cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
    // 0x302960: 0xae132ac0  sw          $s3, 0x2AC0($s0)
    ctx->pc = 0x302960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10944), GPR_U32(ctx, 19));
    // 0x302964: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302964u;
    {
        const bool branch_taken_0x302964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302964u;
        // 0x302968: 0xac7c2b00  sw          $gp, 0x2B00($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11008), GPR_U32(ctx, 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302964) {
            ctx->pc = 0x302974u;
            goto label_302974;
        }
    }
    ctx->pc = 0x30296Cu;
    // 0x30296c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x30296Cu;
    SET_GPR_U32(ctx, 31, 0x302974u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x30296Cu, 0x302974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302974u;
label_302974:
    // 0x302974: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x302974u;
    SET_GPR_U32(ctx, 31, 0x30297Cu);
    ctx->pc = 0x3028F0u;
    goto label_3028f0;
    ctx->pc = 0x30297Cu;
label_30297c:
    // 0x30297c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30297cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302980: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x302980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x302984: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x302984u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302988: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x302988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30298c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x30298cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302990: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x302990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302998: 0x3e00008  jr          $ra
    ctx->pc = 0x302998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302998u;
        // 0x30299c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3029A0u;
}
