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

// Function: sub_001D35A0
// Address: 0x1d35a0 - 0x1d3660
void sub_001D35A0_0x1d35a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D35A0_0x1d35a0");
#endif

    switch (ctx->pc) {
        case 0x1d35f0u: goto label_1d35f0;
        case 0x1d361cu: goto label_1d361c;
        default: break;
    }

    ctx->pc = 0x1d35a0u;

    // 0x1d35a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d35a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d35a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d35a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d35a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d35a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d35ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d35acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d35b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1d35b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1d35b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1d35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1d35b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d35b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d35bc: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x1d35bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d35c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d35c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d35c4: 0x0  nop
    ctx->pc = 0x1d35c4u;
    // NOP
    // 0x1d35c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d35c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d35cc: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1D35CCu;
    {
        const bool branch_taken_0x1d35cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d35cc) {
            ctx->pc = 0x1D3648u;
            goto label_1d3648;
        }
    }
    ctx->pc = 0x1D35D4u;
    // 0x1d35d4: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x1d35d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d35d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d35dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d35e0: 0x246400b4  addiu       $a0, $v1, 0xB4
    ctx->pc = 0x1d35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1d35e4: 0x8c4500cc  lw          $a1, 0xCC($v0)
    ctx->pc = 0x1d35e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1d35e8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D35E8u;
    SET_GPR_U32(ctx, 31, 0x1D35F0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D35E8u, 0x1D35F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35F0u;
label_1d35f0:
    // 0x1d35f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d35f4: 0x16030010  bne         $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D35F4u;
    {
        const bool branch_taken_0x1d35f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d35f4) {
            ctx->pc = 0x1D3638u;
            goto label_1d3638;
        }
    }
    ctx->pc = 0x1D35FCu;
    // 0x1d35fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d3600: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d3600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d3604: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d3604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3608: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d3608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d360c: 0x246400c0  addiu       $a0, $v1, 0xC0
    ctx->pc = 0x1d360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1d3610: 0x8c4500cc  lw          $a1, 0xCC($v0)
    ctx->pc = 0x1d3610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1d3614: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1D3614u;
    SET_GPR_U32(ctx, 31, 0x1D361Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D3614u, 0x1D361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D361Cu;
label_1d361c:
    // 0x1d361c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1d361cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d3620: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1d3620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3624: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x1d3624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1d3628: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d3628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d362c: 0xac8300cc  sw          $v1, 0xCC($a0)
    ctx->pc = 0x1d362cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 3));
    // 0x1d3630: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3630u;
    {
        const bool branch_taken_0x1d3630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3630) {
            ctx->pc = 0x1D3648u;
            goto label_1d3648;
        }
    }
    ctx->pc = 0x1D3638u;
label_1d3638:
    // 0x1d3638: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1d3638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1d363c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d363cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3640: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3644: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1d3644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_1d3648:
    // 0x1d3648: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d3648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d364c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d364cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3650: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3654: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d3654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d3658: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3660u;
}
