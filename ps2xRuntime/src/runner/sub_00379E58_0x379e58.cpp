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

// Function: sub_00379E58
// Address: 0x379e58 - 0x37a0e8
void sub_00379E58_0x379e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379E58_0x379e58");
#endif

    switch (ctx->pc) {
        case 0x379e84u: goto label_379e84;
        case 0x379ec8u: goto label_379ec8;
        case 0x379fd0u: goto label_379fd0;
        default: break;
    }

    ctx->pc = 0x379e58u;

    // 0x379e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x379e5c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x379e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x379e60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x379e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x379e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379e6c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x379e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x379e70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x379e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x379e74: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x379E74u;
    {
        const bool branch_taken_0x379e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379E74u;
        // 0x379e78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379e74) {
            ctx->pc = 0x37A0D8u;
            goto label_37a0d8;
        }
    }
    ctx->pc = 0x379E7Cu;
    // 0x379e7c: 0xc0de61a  jal         func_379868
    ctx->pc = 0x379E7Cu;
    SET_GPR_U32(ctx, 31, 0x379E84u);
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x379E7Cu, 0x379E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E84u;
label_379e84:
    // 0x379e84: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x379e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379e88: 0x8e0c0014  lw          $t4, 0x14($s0)
    ctx->pc = 0x379e88u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x379e8c: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x379e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x379e90: 0x8ce40018  lw          $a0, 0x18($a3)
    ctx->pc = 0x379e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x379e94: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x379e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x379e98: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x379e98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x379e9c: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x379e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x379ea0: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x379ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x379ea4: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x379EA4u;
    {
        const bool branch_taken_0x379ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EA4u;
        // 0x379ea8: 0xace00028  sw          $zero, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ea4) {
            ctx->pc = 0x379FACu;
            goto label_379fac;
        }
    }
    ctx->pc = 0x379EACu;
    // 0x379eac: 0x11800089  beqz        $t4, . + 4 + (0x89 << 2)
    ctx->pc = 0x379EACu;
    {
        const bool branch_taken_0x379eac = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x379EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EACu;
        // 0x379eb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379eac) {
            ctx->pc = 0x37A0D4u;
            goto label_37a0d4;
        }
    }
    ctx->pc = 0x379EB4u;
    // 0x379eb4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x379eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x379eb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x379eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379ebc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x379ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ec0: 0x3508fc00  ori         $t0, $t0, 0xFC00
    ctx->pc = 0x379ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64512);
    // 0x379ec4: 0x0  nop
    ctx->pc = 0x379ec4u;
    // NOP
label_379ec8:
    // 0x379ec8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x379ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x379ecc: 0x24e5001c  addiu       $a1, $a3, 0x1C
    ctx->pc = 0x379eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x379ed0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x379ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x379ed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379ed8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x379ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379edc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x379edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x379ee0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x379ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x379ee4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x379ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x379ee8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x379ee8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x379eec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x379eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x379ef0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x379ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x379ef4: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x379ef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x379ef8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x379EF8u;
    {
        const bool branch_taken_0x379ef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x379EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EF8u;
        // 0x379efc: 0x681824  and         $v1, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ef8) {
            ctx->pc = 0x379F08u;
            goto label_379f08;
        }
    }
    ctx->pc = 0x379F00u;
    // 0x379f00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x379F00u;
    {
        const bool branch_taken_0x379f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F00u;
        // 0x379f04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f00) {
            ctx->pc = 0x379F18u;
            goto label_379f18;
        }
    }
    ctx->pc = 0x379F08u;
label_379f08:
    // 0x379f08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379f0c: 0x24e50020  addiu       $a1, $a3, 0x20
    ctx->pc = 0x379f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x379f10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x379f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x379f14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x379f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_379f18:
    // 0x379f18: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x379f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379f1c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x379f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x379f20: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x379f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x379f24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x379f24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x379f28: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x379f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x379f2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x379F2Cu;
    {
        const bool branch_taken_0x379f2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x379F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F2Cu;
        // 0x379f30: 0x681824  and         $v1, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f2c) {
            ctx->pc = 0x379F3Cu;
            goto label_379f3c;
        }
    }
    ctx->pc = 0x379F34u;
    // 0x379f34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x379F34u;
    {
        const bool branch_taken_0x379f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F34u;
        // 0x379f38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f34) {
            ctx->pc = 0x379F4Cu;
            goto label_379f4c;
        }
    }
    ctx->pc = 0x379F3Cu;
label_379f3c:
    // 0x379f3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379f40: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x379f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x379f44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x379f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x379f48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x379f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_379f4c:
    // 0x379f4c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x379f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379f50: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x379f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x379f54: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x379f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x379f58: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x379f58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x379f5c: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x379f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x379f60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x379F60u;
    {
        const bool branch_taken_0x379f60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x379F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F60u;
        // 0x379f64: 0x681824  and         $v1, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f60) {
            ctx->pc = 0x379F70u;
            goto label_379f70;
        }
    }
    ctx->pc = 0x379F68u;
    // 0x379f68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x379F68u;
    {
        const bool branch_taken_0x379f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F68u;
        // 0x379f6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f68) {
            ctx->pc = 0x379F80u;
            goto label_379f80;
        }
    }
    ctx->pc = 0x379F70u;
label_379f70:
    // 0x379f70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379f74: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x379f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x379f78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x379f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x379f7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x379f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_379f80:
    // 0x379f80: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x379f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x379f84: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x379f84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x379f88: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x379f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x379f8c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x379f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x379f90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x379f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x379f94: 0x14c182b  sltu        $v1, $t2, $t4
    ctx->pc = 0x379f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x379f98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379f9c: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x379F9Cu;
    {
        const bool branch_taken_0x379f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x379FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F9Cu;
        // 0x379fa0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f9c) {
            ctx->pc = 0x379EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379ec8;
        }
    }
    ctx->pc = 0x379FA4u;
    // 0x379fa4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x379FA4u;
    {
        const bool branch_taken_0x379fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FA4u;
        // 0x379fa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379fa4) {
            ctx->pc = 0x37A0D8u;
            goto label_37a0d8;
        }
    }
    ctx->pc = 0x379FACu;
label_379fac:
    // 0x379fac: 0x11800049  beqz        $t4, . + 4 + (0x49 << 2)
    ctx->pc = 0x379FACu;
    {
        const bool branch_taken_0x379fac = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x379FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FACu;
        // 0x379fb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379fac) {
            ctx->pc = 0x37A0D4u;
            goto label_37a0d4;
        }
    }
    ctx->pc = 0x379FB4u;
    // 0x379fb4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x379fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x379fb8: 0x8ceb0038  lw          $t3, 0x38($a3)
    ctx->pc = 0x379fb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x379fbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x379fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379fc0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x379fc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379fc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x379fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379fc8: 0x3529fc00  ori         $t1, $t1, 0xFC00
    ctx->pc = 0x379fc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)64512);
    // 0x379fcc: 0x0  nop
    ctx->pc = 0x379fccu;
    // NOP
label_379fd0:
    // 0x379fd0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x379fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x379fd4: 0x24e6001c  addiu       $a2, $a3, 0x1C
    ctx->pc = 0x379fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x379fd8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x379fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x379fdc: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x379fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x379fe0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x379fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379fe4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x379fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379fe8: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x379fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x379fec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x379fecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x379ff0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379ff4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x379ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x379ff8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x379ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x379ffc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x379ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x37a000: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x37a000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37a004: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x37a004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x37a008: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x37A008u;
    {
        const bool branch_taken_0x37a008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A008u;
        // 0x37a00c: 0x892024  and         $a0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a008) {
            ctx->pc = 0x37A018u;
            goto label_37a018;
        }
    }
    ctx->pc = 0x37A010u;
    // 0x37a010: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37A010u;
    {
        const bool branch_taken_0x37a010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A010u;
        // 0x37a014: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a010) {
            ctx->pc = 0x37A030u;
            goto label_37a030;
        }
    }
    ctx->pc = 0x37A018u;
label_37a018:
    // 0x37a018: 0x1621821  addu        $v1, $t3, $v0
    ctx->pc = 0x37a018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x37a01c: 0x24e60020  addiu       $a2, $a3, 0x20
    ctx->pc = 0x37a01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x37a020: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x37a020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37a024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37a028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37a02c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37a02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_37a030:
    // 0x37a030: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x37a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37a034: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x37a034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x37a038: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x37a038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37a03c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x37a03cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37a040: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x37a040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x37a044: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x37A044u;
    {
        const bool branch_taken_0x37a044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A044u;
        // 0x37a048: 0x892024  and         $a0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a044) {
            ctx->pc = 0x37A054u;
            goto label_37a054;
        }
    }
    ctx->pc = 0x37A04Cu;
    // 0x37a04c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37A04Cu;
    {
        const bool branch_taken_0x37a04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A04Cu;
        // 0x37a050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a04c) {
            ctx->pc = 0x37A070u;
            goto label_37a070;
        }
    }
    ctx->pc = 0x37A054u;
label_37a054:
    // 0x37a054: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x37a054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x37a058: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x37a058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x37a05c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37a060: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x37a060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37a064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37a068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37a06c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37a06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_37a070:
    // 0x37a070: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x37a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37a074: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x37a074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x37a078: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x37a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x37a07c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x37a07cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37a080: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x37a080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x37a084: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x37A084u;
    {
        const bool branch_taken_0x37a084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A084u;
        // 0x37a088: 0x892024  and         $a0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a084) {
            ctx->pc = 0x37A094u;
            goto label_37a094;
        }
    }
    ctx->pc = 0x37A08Cu;
    // 0x37a08c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37A08Cu;
    {
        const bool branch_taken_0x37a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A08Cu;
        // 0x37a090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a08c) {
            ctx->pc = 0x37A0B0u;
            goto label_37a0b0;
        }
    }
    ctx->pc = 0x37A094u;
label_37a094:
    // 0x37a094: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x37a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x37a098: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x37a098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x37a09c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37a0a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x37a0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37a0a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37a0a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37a0ac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37a0acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_37a0b0:
    // 0x37a0b0: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x37a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x37a0b4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x37a0b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x37a0b8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x37a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x37a0bc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x37a0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x37a0c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37a0c4: 0x14c182b  sltu        $v1, $t2, $t4
    ctx->pc = 0x37a0c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x37a0c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37a0cc: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x37A0CCu;
    {
        const bool branch_taken_0x37a0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A0CCu;
        // 0x37a0d0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a0cc) {
            ctx->pc = 0x379FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379fd0;
        }
    }
    ctx->pc = 0x37A0D4u;
label_37a0d4:
    // 0x37a0d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37a0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37a0d8:
    // 0x37a0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a0dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37a0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x37A0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A0E0u;
        // 0x37a0e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A0E8u;
}
