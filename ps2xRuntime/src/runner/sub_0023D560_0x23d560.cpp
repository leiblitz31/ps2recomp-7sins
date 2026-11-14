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

// Function: sub_0023D560
// Address: 0x23d560 - 0x23d610
void sub_0023D560_0x23d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D560_0x23d560");
#endif

    switch (ctx->pc) {
        case 0x23d58cu: goto label_23d58c;
        case 0x23d5f4u: goto label_23d5f4;
        default: break;
    }

    ctx->pc = 0x23d560u;

    // 0x23d560: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23d560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x23d564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d568: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x23d568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x23d56c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x23d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x23d570: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x23d570u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x23d574: 0xa3a600b0  sb          $a2, 0xB0($sp)
    ctx->pc = 0x23d574u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 6));
    // 0x23d578: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x23d578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x23d57c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23d57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23d580: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23d580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23d584: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x23D584u;
    SET_GPR_U32(ctx, 31, 0x23D58Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x23D584u, 0x23D58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D58Cu;
label_23d58c:
    // 0x23d58c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x23d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x23d590: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23d594: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23d594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d598: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x23d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23d59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d5a0: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x23d5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d5a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d5a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23d5a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23d5ac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23d5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23d5b0: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x23d5b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23d5b4: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x23d5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x23d5b8: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x23d5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d5bc: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x23d5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d5c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23d5c4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x23d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x23d5c8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23d5cc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x23d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x23d5d0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x23d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23d5d4: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x23d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x23d5d8: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x23d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x23d5dc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x23d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x23d5e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23d5e4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23d5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23d5e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23d5ec: 0xc08f584  jal         func_23D610
    ctx->pc = 0x23D5ECu;
    SET_GPR_U32(ctx, 31, 0x23D5F4u);
    ctx->pc = 0x23D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D610u, 0x23D5ECu, 0x23D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5F4u;
label_23d5f4:
    // 0x23d5f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23d5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d5fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x23d5fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x23d600: 0x3e00008  jr          $ra
    ctx->pc = 0x23D600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D608u;
    // 0x23d608: 0x0  nop
    ctx->pc = 0x23d608u;
    // NOP
    // 0x23d60c: 0x0  nop
    ctx->pc = 0x23d60cu;
    // NOP
    ctx->pc = 0x23d610u;
}
