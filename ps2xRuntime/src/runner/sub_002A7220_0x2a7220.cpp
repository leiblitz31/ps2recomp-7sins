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

// Function: sub_002A7220
// Address: 0x2a7220 - 0x2a72e0
void sub_002A7220_0x2a7220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7220_0x2a7220");
#endif

    switch (ctx->pc) {
        case 0x2a724cu: goto label_2a724c;
        case 0x2a725cu: goto label_2a725c;
        case 0x2a72a4u: goto label_2a72a4;
        case 0x2a72b4u: goto label_2a72b4;
        default: break;
    }

    ctx->pc = 0x2a7220u;

    // 0x2a7220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a7220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a7224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a7224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a7228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a7228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a722c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7230: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a7230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2a7234: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2a7234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2a7238: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x2a7238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a723c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2a7240: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a7240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2a7244: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x2A7244u;
    SET_GPR_U32(ctx, 31, 0x2A724Cu);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A7244u, 0x2A724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A724Cu;
label_2a724c:
    // 0x2a724c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2a724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2a7250: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a7250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7254: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7254u;
    {
        const bool branch_taken_0x2a7254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7254) {
            ctx->pc = 0x2A7268u;
            goto label_2a7268;
        }
    }
    ctx->pc = 0x2A725Cu;
label_2a725c:
    // 0x2a725c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2a725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2a7260: 0xa0400128  sb          $zero, 0x128($v0)
    ctx->pc = 0x2a7260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 296), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7264: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a7264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a7268:
    // 0x2a7268: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x2a7268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a726c: 0x0  nop
    ctx->pc = 0x2a726cu;
    // NOP
    // 0x2a7270: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A7270u;
    {
        const bool branch_taken_0x2a7270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7270) {
            ctx->pc = 0x2A725Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a725c;
        }
    }
    ctx->pc = 0x2A7278u;
    // 0x2a7278: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x2a7278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a727c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a727cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a7280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7284: 0x0  nop
    ctx->pc = 0x2a7284u;
    // NOP
    // 0x2a7288: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a7288u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a728c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2A728Cu;
    {
        const bool branch_taken_0x2a728c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a728c) {
            ctx->pc = 0x2A72C0u;
            goto label_2a72c0;
        }
    }
    ctx->pc = 0x2A7294u;
    // 0x2a7294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7298: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a7298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a729c: 0xc09d250  jal         func_274940
    ctx->pc = 0x2A729Cu;
    SET_GPR_U32(ctx, 31, 0x2A72A4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A729Cu, 0x2A72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72A4u;
label_2a72a4:
    // 0x2a72a4: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2a72a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2a72a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a72a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72ac: 0xc121904  jal         func_486410
    ctx->pc = 0x2A72ACu;
    SET_GPR_U32(ctx, 31, 0x2A72B4u);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x2A72ACu, 0x2A72B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72B4u;
label_2a72b4:
    // 0x2a72b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a72b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A72B8u;
    {
        const bool branch_taken_0x2a72b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a72b8) {
            ctx->pc = 0x2A72C4u;
            goto label_2a72c4;
        }
    }
    ctx->pc = 0x2A72C0u;
label_2a72c0:
    // 0x2a72c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a72c4:
    // 0x2a72c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a72c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a72c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a72c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a72cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a72ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a72d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a72d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A72D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A72D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A72DCu;
    // 0x2a72dc: 0x0  nop
    ctx->pc = 0x2a72dcu;
    // NOP
    ctx->pc = 0x2a72e0u;
}
