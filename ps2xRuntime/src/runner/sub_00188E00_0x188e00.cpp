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

// Function: sub_00188E00
// Address: 0x188e00 - 0x188f60
void sub_00188E00_0x188e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188E00_0x188e00");
#endif

    switch (ctx->pc) {
        case 0x188e58u: goto label_188e58;
        case 0x188e80u: goto label_188e80;
        case 0x188e8cu: goto label_188e8c;
        case 0x188eb4u: goto label_188eb4;
        case 0x188ec4u: goto label_188ec4;
        case 0x188ee4u: goto label_188ee4;
        case 0x188f24u: goto label_188f24;
        default: break;
    }

    ctx->pc = 0x188e00u;

    // 0x188e00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x188e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x188e04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x188e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x188e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188e0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188e14: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x188e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x188e18: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x188e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x188e1c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x188e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x188e20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188e24: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188E24u;
    {
        const bool branch_taken_0x188e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188e24) {
            ctx->pc = 0x188E38u;
            goto label_188e38;
        }
    }
    ctx->pc = 0x188E2Cu;
    // 0x188e2c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x188e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x188e30: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x188e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x188e34: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x188e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_188e38:
    // 0x188e38: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x188e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x188e3c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x188e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x188e40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x188e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x188e44: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x188e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x188e48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x188e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x188e4c: 0xc78c8280  lwc1        $f12, -0x7D80($gp)
    ctx->pc = 0x188e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188e50: 0xc0623d8  jal         func_188F60
    ctx->pc = 0x188E50u;
    SET_GPR_U32(ctx, 31, 0x188E58u);
    ctx->pc = 0x188F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F60u, 0x188E50u, 0x188E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E58u;
label_188e58:
    // 0x188e58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x188e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x188e5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x188e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x188e60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x188e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x188e64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x188e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x188e68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x188e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x188e6c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x188e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x188e70: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x188e74: 0xc78f80ac  lwc1        $f15, -0x7F54($gp)
    ctx->pc = 0x188e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x188e78: 0xc0623d8  jal         func_188F60
    ctx->pc = 0x188E78u;
    SET_GPR_U32(ctx, 31, 0x188E80u);
    ctx->pc = 0x188F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F60u, 0x188E78u, 0x188E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E80u;
label_188e80:
    // 0x188e80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x188e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e84: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x188E84u;
    {
        const bool branch_taken_0x188e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188e84) {
            ctx->pc = 0x188F34u;
            goto label_188f34;
        }
    }
    ctx->pc = 0x188E8Cu;
label_188e8c:
    // 0x188e8c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x188e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x188e90: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x188e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x188e94: 0x2021006  srlv        $v0, $v0, $s0
    ctx->pc = 0x188e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x188e98: 0x30520001  andi        $s2, $v0, 0x1
    ctx->pc = 0x188e98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x188e9c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x188e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x188ea0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x188ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x188ea4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x188ea8: 0x24a55268  addiu       $a1, $a1, 0x5268
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21096));
    // 0x188eac: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x188EACu;
    SET_GPR_U32(ctx, 31, 0x188EB4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x188EACu, 0x188EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EB4u;
label_188eb4:
    // 0x188eb4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x188eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x188eb8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x188eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x188ebc: 0xc05621c  jal         func_158870
    ctx->pc = 0x188EBCu;
    SET_GPR_U32(ctx, 31, 0x188EC4u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x188EBCu, 0x188EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EC4u;
label_188ec4:
    // 0x188ec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x188ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ec8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x188EC8u;
    {
        const bool branch_taken_0x188ec8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x188ec8) {
            ctx->pc = 0x188F24u;
            goto label_188f24;
        }
    }
    ctx->pc = 0x188ED0u;
    // 0x188ed0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x188ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x188ed4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x188ed8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188edc: 0xc08c49c  jal         func_231270
    ctx->pc = 0x188EDCu;
    SET_GPR_U32(ctx, 31, 0x188EE4u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x188EDCu, 0x188EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EE4u;
label_188ee4:
    // 0x188ee4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x188ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x188ee8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x188ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x188eec: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x188eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x188ef0: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x188ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188ef4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x188ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x188ef8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x188ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188efc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x188efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x188f00: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188f04: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x188f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x188f08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f0c: 0xc4cc0060  lwc1        $f12, 0x60($a2)
    ctx->pc = 0x188f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188f10: 0xc46d0064  lwc1        $f13, 0x64($v1)
    ctx->pc = 0x188f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x188f14: 0xc44e0068  lwc1        $f14, 0x68($v0)
    ctx->pc = 0x188f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x188f18: 0xc7af008c  lwc1        $f15, 0x8C($sp)
    ctx->pc = 0x188f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x188f1c: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x188F1Cu;
    SET_GPR_U32(ctx, 31, 0x188F24u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x188F1Cu, 0x188F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F24u;
label_188f24:
    // 0x188f24: 0x8f83bae4  lw          $v1, -0x451C($gp)
    ctx->pc = 0x188f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x188f28: 0x701826  xor         $v1, $v1, $s0
    ctx->pc = 0x188f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 16));
    // 0x188f2c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x188f2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x188f30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x188f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_188f34:
    // 0x188f34: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x188f34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x188f38: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x188F38u;
    {
        const bool branch_taken_0x188f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188f38) {
            ctx->pc = 0x188E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188F40u;
    // 0x188f40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x188f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188f44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188f50: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x188f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188f54: 0x3e00008  jr          $ra
    ctx->pc = 0x188F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188F5Cu;
    // 0x188f5c: 0x0  nop
    ctx->pc = 0x188f5cu;
    // NOP
    ctx->pc = 0x188f60u;
}
