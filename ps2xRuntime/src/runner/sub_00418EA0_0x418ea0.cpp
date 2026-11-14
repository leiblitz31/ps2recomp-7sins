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

// Function: sub_00418EA0
// Address: 0x418ea0 - 0x418fd8
void sub_00418EA0_0x418ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418EA0_0x418ea0");
#endif

    switch (ctx->pc) {
        case 0x418ef4u: goto label_418ef4;
        case 0x418f24u: goto label_418f24;
        case 0x418f3cu: goto label_418f3c;
        case 0x418f50u: goto label_418f50;
        case 0x418f64u: goto label_418f64;
        case 0x418f78u: goto label_418f78;
        case 0x418f8cu: goto label_418f8c;
        case 0x418fa8u: goto label_418fa8;
        case 0x418fb0u: goto label_418fb0;
        case 0x418fb8u: goto label_418fb8;
        default: break;
    }

    ctx->pc = 0x418ea0u;

    // 0x418ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x418ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x418ea4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x418ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x418ea8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x418ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x418eac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x418eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x418eb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x418eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418eb4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x418eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x418eb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x418eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418ebc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x418ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x418ec0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x418ec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418ec4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x418EC4u;
    {
        const bool branch_taken_0x418ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x418EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418EC4u;
        // 0x418ec8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418ec4) {
            ctx->pc = 0x418EFCu;
            goto label_418efc;
        }
    }
    ctx->pc = 0x418ECCu;
    // 0x418ecc: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x418eccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x418ed0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x418ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x418ed4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x418ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x418ed8: 0x2605e880  addiu       $a1, $s0, -0x1780
    ctx->pc = 0x418ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
    // 0x418edc: 0x24639360  addiu       $v1, $v1, -0x6CA0
    ctx->pc = 0x418edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939488));
    // 0x418ee0: 0x24429388  addiu       $v0, $v0, -0x6C78
    ctx->pc = 0x418ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939528));
    // 0x418ee4: 0xaca2011c  sw          $v0, 0x11C($a1)
    ctx->pc = 0x418ee4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E99Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E99Cu, _value); } while (0);
    // 0x418ee8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x418ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418eec: 0xc104470  jal         func_4111C0
    ctx->pc = 0x418EECu;
    SET_GPR_U32(ctx, 31, 0x418EF4u);
    ctx->pc = 0x418EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418EECu;
    // 0x418ef0: 0xaca30118  sw          $v1, 0x118($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4111C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4111C0u, 0x418EECu, 0x418EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418EF4u;
label_418ef4:
    // 0x418ef4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x418EF4u;
    {
        const bool branch_taken_0x418ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418EF4u;
        // 0x418ef8: 0x2610e880  addiu       $s0, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418ef4) {
            ctx->pc = 0x418F28u;
            goto label_418f28;
        }
    }
    ctx->pc = 0x418EFCu;
label_418efc:
    // 0x418efc: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x418efcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x418f00: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x418f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x418f04: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x418f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x418f08: 0x2605e880  addiu       $a1, $s0, -0x1780
    ctx->pc = 0x418f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
    // 0x418f0c: 0x246305a0  addiu       $v1, $v1, 0x5A0
    ctx->pc = 0x418f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x418f10: 0x24420b10  addiu       $v0, $v0, 0xB10
    ctx->pc = 0x418f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x418f14: 0xaca2011c  sw          $v0, 0x11C($a1)
    ctx->pc = 0x418f14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E99Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E99Cu, _value); } while (0);
    // 0x418f18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x418f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418f1c: 0xc104470  jal         func_4111C0
    ctx->pc = 0x418F1Cu;
    SET_GPR_U32(ctx, 31, 0x418F24u);
    ctx->pc = 0x418F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418F1Cu;
    // 0x418f20: 0xaca30118  sw          $v1, 0x118($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4111C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4111C0u, 0x418F1Cu, 0x418F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418F24u;
label_418f24:
    // 0x418f24: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x418f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_418f28:
    // 0x418f28: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x418f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x418f2c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x418F2Cu;
    {
        const bool branch_taken_0x418f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x418F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418F2Cu;
        // 0x418f30: 0xae120128  sw          $s2, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418f2c) {
            ctx->pc = 0x418FB8u;
            goto label_418fb8;
        }
    }
    ctx->pc = 0x418F34u;
    // 0x418f34: 0xc1051dc  jal         func_414770
    ctx->pc = 0x418F34u;
    SET_GPR_U32(ctx, 31, 0x418F3Cu);
    ctx->pc = 0x414770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414770u, 0x418F34u, 0x418F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418F3Cu;
label_418f3c:
    // 0x418f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x418f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418f40: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x418F40u;
    {
        const bool branch_taken_0x418f40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x418F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418F40u;
        // 0x418f44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418f40) {
            ctx->pc = 0x418FBCu;
            goto label_418fbc;
        }
    }
    ctx->pc = 0x418F48u;
    // 0x418f48: 0xc104430  jal         func_4110C0
    ctx->pc = 0x418F48u;
    SET_GPR_U32(ctx, 31, 0x418F50u);
    ctx->pc = 0x418F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418F48u;
    // 0x418f4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4110C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4110C0u, 0x418F48u, 0x418F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418F50u;
label_418f50:
    // 0x418f50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x418f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418f54: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x418F54u;
    {
        const bool branch_taken_0x418f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x418f54) {
            ctx->pc = 0x418FB0u;
            goto label_418fb0;
        }
    }
    ctx->pc = 0x418F5Cu;
    // 0x418f5c: 0xc104c4a  jal         func_413128
    ctx->pc = 0x418F5Cu;
    SET_GPR_U32(ctx, 31, 0x418F64u);
    ctx->pc = 0x413128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413128u, 0x418F5Cu, 0x418F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418F64u;
label_418f64:
    // 0x418f64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x418f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418f68: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x418F68u;
    {
        const bool branch_taken_0x418f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x418f68) {
            ctx->pc = 0x418FA8u;
            goto label_418fa8;
        }
    }
    ctx->pc = 0x418F70u;
    // 0x418f70: 0xc106178  jal         func_4185E0
    ctx->pc = 0x418F70u;
    SET_GPR_U32(ctx, 31, 0x418F78u);
    ctx->pc = 0x4185E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4185E0u, 0x418F70u, 0x418F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418F78u;
label_418f78:
    // 0x418f78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x418f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418f7c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x418F7Cu;
    {
        const bool branch_taken_0x418f7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x418f7c) {
            ctx->pc = 0x418FA0u;
            goto label_418fa0;
        }
    }
    ctx->pc = 0x418F84u;
    // 0x418f84: 0xc10d514  jal         func_435450
    ctx->pc = 0x418F84u;
    SET_GPR_U32(ctx, 31, 0x418F8Cu);
    ctx->pc = 0x435450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435450u, 0x418F84u, 0x418F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418F8Cu;
label_418f8c:
    // 0x418f8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x418f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418f90: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x418F90u;
    {
        const bool branch_taken_0x418f90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x418F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418F90u;
        // 0x418f94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418f90) {
            ctx->pc = 0x418FA0u;
            goto label_418fa0;
        }
    }
    ctx->pc = 0x418F98u;
    // 0x418f98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x418F98u;
    {
        const bool branch_taken_0x418f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418F98u;
        // 0x418f9c: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418f98) {
            ctx->pc = 0x418FBCu;
            goto label_418fbc;
        }
    }
    ctx->pc = 0x418FA0u;
label_418fa0:
    // 0x418fa0: 0xc104b26  jal         func_412C98
    ctx->pc = 0x418FA0u;
    SET_GPR_U32(ctx, 31, 0x418FA8u);
    ctx->pc = 0x412C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412C98u, 0x418FA0u, 0x418FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418FA8u;
label_418fa8:
    // 0x418fa8: 0xc10441c  jal         func_411070
    ctx->pc = 0x418FA8u;
    SET_GPR_U32(ctx, 31, 0x418FB0u);
    ctx->pc = 0x411070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411070u, 0x418FA8u, 0x418FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418FB0u;
label_418fb0:
    // 0x418fb0: 0xc10531c  jal         func_414C70
    ctx->pc = 0x418FB0u;
    SET_GPR_U32(ctx, 31, 0x418FB8u);
    ctx->pc = 0x414C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414C70u, 0x418FB0u, 0x418FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418FB8u;
label_418fb8:
    // 0x418fb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x418fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_418fbc:
    // 0x418fbc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x418fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x418fc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x418fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x418fc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x418fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x418fc8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x418fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x418fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x418fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x418FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418FD0u;
        // 0x418fd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418FD8u;
}
