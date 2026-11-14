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

// Function: sub_002E9E80
// Address: 0x2e9e80 - 0x2e9ef0
void sub_002E9E80_0x2e9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9E80_0x2e9e80");
#endif

    switch (ctx->pc) {
        case 0x2e9e80u: goto label_2e9e80;
        case 0x2e9e84u: goto label_2e9e84;
        case 0x2e9e88u: goto label_2e9e88;
        case 0x2e9e8cu: goto label_2e9e8c;
        case 0x2e9e90u: goto label_2e9e90;
        case 0x2e9e94u: goto label_2e9e94;
        case 0x2e9e98u: goto label_2e9e98;
        case 0x2e9e9cu: goto label_2e9e9c;
        case 0x2e9ea0u: goto label_2e9ea0;
        case 0x2e9ea4u: goto label_2e9ea4;
        case 0x2e9ea8u: goto label_2e9ea8;
        case 0x2e9eacu: goto label_2e9eac;
        case 0x2e9eb0u: goto label_2e9eb0;
        case 0x2e9eb4u: goto label_2e9eb4;
        case 0x2e9eb8u: goto label_2e9eb8;
        case 0x2e9ebcu: goto label_2e9ebc;
        case 0x2e9ec0u: goto label_2e9ec0;
        case 0x2e9ec4u: goto label_2e9ec4;
        case 0x2e9ec8u: goto label_2e9ec8;
        case 0x2e9eccu: goto label_2e9ecc;
        case 0x2e9ed0u: goto label_2e9ed0;
        case 0x2e9ed4u: goto label_2e9ed4;
        case 0x2e9ed8u: goto label_2e9ed8;
        case 0x2e9edcu: goto label_2e9edc;
        case 0x2e9ee0u: goto label_2e9ee0;
        case 0x2e9ee4u: goto label_2e9ee4;
        case 0x2e9ee8u: goto label_2e9ee8;
        case 0x2e9eecu: goto label_2e9eec;
        default: break;
    }

    ctx->pc = 0x2e9e80u;

label_2e9e80:
    // 0x2e9e80: 0x78900120  lq          $s0, 0x120($a0)
    ctx->pc = 0x2e9e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 288)));
label_2e9e84:
    // 0x2e9e84: 0x78910130  lq          $s1, 0x130($a0)
    ctx->pc = 0x2e9e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 4), 304)));
label_2e9e88:
    // 0x2e9e88: 0x78920140  lq          $s2, 0x140($a0)
    ctx->pc = 0x2e9e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 4), 320)));
label_2e9e8c:
    // 0x2e9e8c: 0x78930150  lq          $s3, 0x150($a0)
    ctx->pc = 0x2e9e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 4), 336)));
label_2e9e90:
    // 0x2e9e90: 0x78940160  lq          $s4, 0x160($a0)
    ctx->pc = 0x2e9e90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 4), 352)));
label_2e9e94:
    // 0x2e9e94: 0x78950170  lq          $s5, 0x170($a0)
    ctx->pc = 0x2e9e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 4), 368)));
label_2e9e98:
    // 0x2e9e98: 0x78960180  lq          $s6, 0x180($a0)
    ctx->pc = 0x2e9e98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 4), 384)));
label_2e9e9c:
    // 0x2e9e9c: 0x78970190  lq          $s7, 0x190($a0)
    ctx->pc = 0x2e9e9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 400)));
label_2e9ea0:
    // 0x2e9ea0: 0x789e0200  lq          $fp, 0x200($a0)
    ctx->pc = 0x2e9ea0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 4), 512)));
label_2e9ea4:
    // 0x2e9ea4: 0xc4940288  lwc1        $f20, 0x288($a0)
    ctx->pc = 0x2e9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e9ea8:
    // 0x2e9ea8: 0xc495028c  lwc1        $f21, 0x28C($a0)
    ctx->pc = 0x2e9ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e9eac:
    // 0x2e9eac: 0xc4960290  lwc1        $f22, 0x290($a0)
    ctx->pc = 0x2e9eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2e9eb0:
    // 0x2e9eb0: 0xc4970294  lwc1        $f23, 0x294($a0)
    ctx->pc = 0x2e9eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2e9eb4:
    // 0x2e9eb4: 0xc4980298  lwc1        $f24, 0x298($a0)
    ctx->pc = 0x2e9eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2e9eb8:
    // 0x2e9eb8: 0xc499029c  lwc1        $f25, 0x29C($a0)
    ctx->pc = 0x2e9eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2e9ebc:
    // 0x2e9ebc: 0xc49a02a0  lwc1        $f26, 0x2A0($a0)
    ctx->pc = 0x2e9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2e9ec0:
    // 0x2e9ec0: 0xc49b02a4  lwc1        $f27, 0x2A4($a0)
    ctx->pc = 0x2e9ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_2e9ec4:
    // 0x2e9ec4: 0xc49c02a8  lwc1        $f28, 0x2A8($a0)
    ctx->pc = 0x2e9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2e9ec8:
    // 0x2e9ec8: 0xc49d02ac  lwc1        $f29, 0x2AC($a0)
    ctx->pc = 0x2e9ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_2e9ecc:
    // 0x2e9ecc: 0xc49e02b0  lwc1        $f30, 0x2B0($a0)
    ctx->pc = 0x2e9eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_2e9ed0:
    // 0x2e9ed0: 0xc49f02b4  lwc1        $f31, 0x2B4($a0)
    ctx->pc = 0x2e9ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_2e9ed4:
    // 0x2e9ed4: 0x8c9d001c  lw          $sp, 0x1C($a0)
    ctx->pc = 0x2e9ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2e9ed8:
    // 0x2e9ed8: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x2e9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_2e9edc:
    // 0x2e9edc: 0xc00008  jr          $a2
label_2e9ee0:
    if (ctx->pc == 0x2E9EE0u) {
        ctx->pc = 0x2E9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9EDCu;
        // 0x2e9ee0: 0x3a2e822  sub         $sp, $sp, $v0 (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 29), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9EE4u;
        goto label_2e9ee4;
    }
    ctx->pc = 0x2E9EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x2E9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9EDCu;
        // 0x2e9ee0: 0x3a2e822  sub         $sp, $sp, $v0 (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 29), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9EDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E9EE4u;
label_2e9ee4:
    // 0x2e9ee4: 0x0  nop
    ctx->pc = 0x2e9ee4u;
    // NOP
label_2e9ee8:
    // 0x2e9ee8: 0x0  nop
    ctx->pc = 0x2e9ee8u;
    // NOP
label_2e9eec:
    // 0x2e9eec: 0x0  nop
    ctx->pc = 0x2e9eecu;
    // NOP
    ctx->pc = 0x2e9ef0u;
}
